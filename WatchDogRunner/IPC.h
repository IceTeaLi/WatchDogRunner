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

//#include "WindowsMessageHelpers.h"

namespace ipc
{
	namespace message
	{
		
		//@brief: �洢messageֵ������messageֵת���Ķ�Ӧ��Ϣ�ַ���
		typedef struct tagFMessageName
		{
			DWORD msg_code;
			LPCTSTR name;
		}FMessageName;

		typedef struct tagMessage Message;
		//@brief: ���ڻ�����Ϣ���� :messageת�ַ���,WM_COPYDATA����
		//@interface: 
		//			--static const FMessageName& LookUpMessage(const DWORD& msg)
		//			--static const MSG& TranslateCopydataMsg(const MSG& copy_date)
		class MessageBase
		{
		public:
			MessageBase();
			~MessageBase();

			static const FMessageName& LookUpMessage(const DWORD& msg)
			{
				for (auto& c : WindowsMessageNames)
				{
					if (c.msg_code == msg)
					{
						return c;
					}
				}
			}

			static const Message& TranslateCopydataMsg(const MSG& copy_date);

		protected:
		private:
			static const FMessageName WindowsMessageNames[1100];
		};

		//@brief: �Զ���message�ṹ�壬Ϊ��ͳһMSG��CWPSTRUCT
		//@note:Message << MSG ||Message << CWPSTRUCT
		typedef struct tagMessage
		{
			FMessageName message;
			HWND hwnd;
			WPARAM wParam;
			LPARAM lParam;
			tagMessage operator<<(const MSG& msg)
			{
				this->hwnd = msg.hwnd;
				this->lParam = msg.lParam;
				this->wParam = msg.wParam;
				this->message = MessageBase::LookUpMessage(msg.message);
				return *this;
			}
			tagMessage operator<<(const CWPSTRUCT& msg)
			{
				this->hwnd = msg.hwnd;
				this->lParam = msg.lParam;
				this->wParam = msg.wParam;
				this->message = MessageBase::LookUpMessage(msg.message);
				return *this;
			}
		}Message;

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

			inline void insert(const Message& msg)
			{
				std::lock_guard<std::mutex> lock(mutex);
				if (msg.message.msg_code != NULL)
					msg_cache.push(msg);
			}

			inline const Message get()
			{
				Message temp = {};
				if (msg_cache.empty())

					return temp;
				std::lock_guard<std::mutex> lock(mutex);
				temp = msg_cache.front();
				msg_cache.pop();
				return temp;
			}

			inline const Message get(const DWORD msg)
			{
				Message temp = {};
				if (msg_cache.empty())
					return temp;
				std::lock_guard<std::mutex> lock(mutex);
				if (msg_cache.front().message.msg_code == msg)
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
				std::queue<Message> empty;
				std::swap(msg_cache, empty);
			}

		private:
			std::queue<Message> msg_cache = {};

			std::mutex mutex;
		};

		//����͸�����ڣ����ô�����Ϣѭ������SendMessage()
		class MsgIPCWnd :public QWidget
		{
			Q_OBJECT
		public:
			MsgIPCWnd(QWidget* parent = Q_NULLPTR);
			~MsgIPCWnd();

			inline virtual void MsgIPCWnd::start()
			{
				cache_enable = true;
			}
			inline virtual void MsgIPCWnd::stop()
			{
				cache_enable = false;
			}

		protected:
			Cache* cache;

			virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override;


		private:
			bool cache_enable = false;
		};

	}

}

