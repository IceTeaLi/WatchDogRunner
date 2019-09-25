/********************************************************************************
** Form generated from reading UI file 'WatchDogRunner.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WATCHDOGRUNNER_H
#define UI_WATCHDOGRUNNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WatchDogRunnerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WatchDogRunnerClass)
    {
        if (WatchDogRunnerClass->objectName().isEmpty())
            WatchDogRunnerClass->setObjectName(QString::fromUtf8("WatchDogRunnerClass"));
        WatchDogRunnerClass->resize(600, 400);
        menuBar = new QMenuBar(WatchDogRunnerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        WatchDogRunnerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WatchDogRunnerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        WatchDogRunnerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(WatchDogRunnerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        WatchDogRunnerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WatchDogRunnerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        WatchDogRunnerClass->setStatusBar(statusBar);

        retranslateUi(WatchDogRunnerClass);

        QMetaObject::connectSlotsByName(WatchDogRunnerClass);
    } // setupUi

    void retranslateUi(QMainWindow *WatchDogRunnerClass)
    {
        WatchDogRunnerClass->setWindowTitle(QApplication::translate("WatchDogRunnerClass", "WatchDogRunner", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WatchDogRunnerClass: public Ui_WatchDogRunnerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WATCHDOGRUNNER_H
