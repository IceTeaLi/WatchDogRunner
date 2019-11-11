#include "WatchDogRunner.h"
#include <QtWidgets/QApplication>
#include <QDesktopWidget>
#include <QFile>
#include <QSplashScreen>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	QFile qss("./Resources/qss/OSX Dark.qss");
	int ret =qss.open(QFile::ReadOnly);
	qApp->setStyleSheet(qss.readAll());
	qss.close();
	/*
	QPixmap pixmap("./Resources/image/StartUp.png");
	QPixmap loading = pixmap.scaled(QSize(QApplication::desktop()->width() / 5, QApplication::desktop()->height() / 5), Qt::KeepAspectRatioByExpanding);
	QSplashScreen splash(loading);
	splash.show();
	a.processEvents();
	*/
	WatchDogRunner w;
	w.show();

	//splash.finish(&w);
	return a.exec();
}
