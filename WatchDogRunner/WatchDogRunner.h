#pragma once

#include <QtWidgets/QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QLayout>
#include <QListWidget>

#include "ui_WatchDogRunner.h"
#include "TabWidget.h"

class WatchDogRunner : public QMainWindow
{
	Q_OBJECT

public:
	WatchDogRunner(QWidget *parent = Q_NULLPTR);

private:
	Ui::WatchDogRunnerClass ui;

	gui::MainWidget* tab;

	QGridLayout* main_layout;
};
