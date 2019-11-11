#pragma once

#include <QtWidgets/QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QLayout>
#include <QListWidget>
#include <QDesktopWidget>
#include <QListWidget>
#include "NavigationBar.h"
#include "MainContent.h"
#include "IPC.h"
#include "Hook.h"
#include "Process.h"
#include "ui_WatchDogRunner.h"



class WatchDogRunner : public QMainWindow
{
	Q_OBJECT

public:
	WatchDogRunner(QWidget *parent = Q_NULLPTR);

private:
	Ui::WatchDogRunnerClass ui;

	ui_component::NavigationBar* list;

	QGridLayout* main_layout;

	void Init();

	void SetLayout();

	ipc::MsgIPCWnd *server;
};
