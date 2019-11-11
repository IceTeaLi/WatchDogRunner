#include "IPC.h"



ipc::Cache::Cache()
{
}


ipc::Cache::~Cache()
{
}

ipc::MsgIPCWnd::MsgIPCWnd(QWidget* parent) :
	QWidget(parent)
{
	cache = new Cache;
	this->setWindowTitle(QString(u8"ipc"));
//	this->setAttribute(Qt::WA_TransparentForMouseEvents,true);
	//this->setWindowOpacity(0);
	this->show();

}

ipc::MsgIPCWnd::~MsgIPCWnd()
{
	if (!cache->empty())
	{
		cache->clear();
		delete cache;
		cache = nullptr;
	}
	delete cache;
	cache = nullptr;
}


bool ipc::MsgIPCWnd::nativeEvent(const QByteArray& eventType, void* message, long* result)
{
	if (eventType == "windows_generic_MSG" && cache_enable == true)
	{
		MSG* msg = static_cast<MSG*>(message);
		if (msg->message == WM_COPYDATA)
		{
			cache->insert(*msg);
			qDebug() << msg->message;
		}
	}
	return false;
}



ipc::MsgIPCServer::MsgIPCServer()
{

}

ipc::MsgIPCServer::~MsgIPCServer()
{

}

