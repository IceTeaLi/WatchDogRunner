#pragma once
#include <Windows.h>
#include <queue>
#include <exception>
#include <mutex>
#include <thread>
#include <QWidget>

using std::queue;

namespace ipc
{
	//class Cache
	//FIFO�������������ڶ�hook���̷��͹�������Ϣ���л��壬��SendMessage��ͬ��ͨ��ת��Ϊ�첽
	//ͬʱ��֤��Ϣ������
	//@insert() ��������
	//@get() ��ȡ���ȱ����������
	//@size() ��ȡ������������������
	template<class Data>
	class Cache
	{
	public:
		Cache();
		~Cache();

		inline void insert(const Data& data)
		{
			std::unique_lock<std::mutex> lock(mutex);
			cache_q.push(data);
		}

		inline const Data& get()
		{
			if (!cache_q.empty())
			{
				std::unique_lock<std::mutex> lock(mutex);
				Data temp = cache_q.front();
				cache_q.pop();
				lock.unlock();
				return temp;
			}
			return nullptr;
		}

		inline const int size() const
		{
			return cache_q.size();
		}

	private:
		std::mutex mutex;
		queue<Data> cache_q;
	};


	template<class Data>
	ipc::Cache<Data>::Cache()
	{
	}
	template<class Data>
	ipc::Cache<Data>::~Cache()
	{
	}

	//class InvisibleWindow
	//SendMessage��ͨ�ŷ�ʽ��Ҫ���ڵ�Э������ͨ��InvisibleWindow����͸�����ڣ�
	//��������hooked ���̷��͹�������Ϣ
	//��һԭ��ֻ�������MSG���ݣ�������Cache��ά��
	class InvisibleWindow:public QWidget
	{
		Q_OBJECT
	public:
		InvisibleWindow(Cache<MSG>& cache, QWidget* parent = Q_NULLPTR);
		~InvisibleWindow();

	protected:

	private:
		Cache<MSG> &cache;
	};

	class MsgIPC
	{
	public:
		MsgIPC();
		~MsgIPC();

	private:
		Cache<MSG> cache;
	};

}



