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
	//FIFO缓存容器，用于对hook进程发送过来的消息进行缓冲，将SendMessage的同步通信转化为异步
	//同时保证消息的完整
	//@insert() 插入数据
	//@get() 获取最先被插入的数据
	//@size() 获取缓冲区数据量（个）
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
	//SendMessage的通信方式需要窗口的协助，故通过InvisibleWindow创建透明窗口，
	//接收来自hooked 进程发送过来的消息
	//单一原则：只负责接收MSG数据，不负责Cache的维护
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



