#pragma once

#include <Windows.h>
#include <queue>
#include <mutex>
#include <vector>
#include <iostream>


#include <QDialog>
#include <QString>
#include <QDesktopWidget>
#include <QApplication>
#include <QDebug>

namespace ipc
{
	//��ΪSendMessage()ͬ��ͨ�ŵĻ��壬ת��Ϊ�첽ͨ��
	//�����ӿڣ�
	//void insert(const MSG& msg);
	//const MSG get();
	//void clear();
	class Cache
	{
	public:
		Cache();
		~Cache();

		inline void insert(const MSG& msg)
		{
			std::lock_guard<std::mutex> lock(mutex);
			if(msg.message!=NULL)
				msg_cache.push(msg);
		}

		inline const MSG get()
		{
			MSG temp = {};
			if (msg_cache.empty())
				return temp;
			std::lock_guard<std::mutex> lock(mutex);
			temp = msg_cache.front();
			msg_cache.pop();
			return temp;		
		}

		inline const MSG get(const DWORD msg)
		{
			MSG temp = {};
			if (msg_cache.empty())
				return temp;
			std::lock_guard<std::mutex> lock(mutex);
			if (msg_cache.front().message == msg)
				temp = msg_cache.front();
			msg_cache.pop();
			return temp;
		}

		inline const bool empty()
		{
			return msg_cache.empty();
		}

		inline void clear()
		{
			std::queue<MSG> empty;
			std::swap(msg_cache, empty);
		}

	private:
		std::queue<MSG> msg_cache = {};

		std::mutex mutex;
	};

	//����͸�����ڣ����ô�����Ϣѭ������SendMessage()
	class MsgIPCWnd :public QWidget
	{
		Q_OBJECT
	public:
		MsgIPCWnd(QWidget* parent = Q_NULLPTR);
		~MsgIPCWnd();

		inline virtual void ipc::MsgIPCWnd::start()
		{
			cache_enable = true;
		}
		inline virtual void ipc::MsgIPCWnd::stop()
		{
			cache_enable = false;
		}

	protected:
		Cache* cache;

		virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override;


	private:
		bool cache_enable = false;
	};

	//��Ϣipcͨ��
	//
	class MsgIPCServer:public MsgIPCWnd
	{
	public:
		MsgIPCServer();
		~MsgIPCServer();

		void setFilter(std::vector<MSG>&);
	private:
		
	};

}

