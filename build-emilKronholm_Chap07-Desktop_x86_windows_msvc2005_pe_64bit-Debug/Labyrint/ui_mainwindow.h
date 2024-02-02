/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include "mazewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSlow;
    QAction *actionNormal;
    QAction *actionFast;
    QAction *actionUltrafast;
    QAction *actionSearchRecursive;
    QAction *actionSearchFIFO;
    QAction *actionUniqpath;
    QAction *actionfMuliplepath;
    MazeWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuMaze;
    QMenu *menuVisualisering;
    QMenu *menuAlgoritm;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(575, 376);
        actionSlow = new QAction(MainWindow);
        actionSlow->setObjectName("actionSlow");
        actionSlow->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/turtle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSlow->setIcon(icon);
        actionNormal = new QAction(MainWindow);
        actionNormal->setObjectName("actionNormal");
        actionNormal->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/rabbit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNormal->setIcon(icon1);
        actionFast = new QAction(MainWindow);
        actionFast->setObjectName("actionFast");
        actionFast->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/rocket.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFast->setIcon(icon2);
        actionUltrafast = new QAction(MainWindow);
        actionUltrafast->setObjectName("actionUltrafast");
        actionUltrafast->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/cspeed.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUltrafast->setIcon(icon3);
        actionSearchRecursive = new QAction(MainWindow);
        actionSearchRecursive->setObjectName("actionSearchRecursive");
        actionSearchFIFO = new QAction(MainWindow);
        actionSearchFIFO->setObjectName("actionSearchFIFO");
        actionUniqpath = new QAction(MainWindow);
        actionUniqpath->setObjectName("actionUniqpath");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/single.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUniqpath->setIcon(icon4);
        actionfMuliplepath = new QAction(MainWindow);
        actionfMuliplepath->setObjectName("actionfMuliplepath");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/multiple.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionfMuliplepath->setIcon(icon5);
        centralWidget = new MazeWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setMinimumSize(QSize(200, 200));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 575, 22));
        menuMaze = new QMenu(menuBar);
        menuMaze->setObjectName("menuMaze");
        menuVisualisering = new QMenu(menuBar);
        menuVisualisering->setObjectName("menuVisualisering");
        menuAlgoritm = new QMenu(menuBar);
        menuAlgoritm->setObjectName("menuAlgoritm");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMaze->menuAction());
        menuBar->addAction(menuVisualisering->menuAction());
        menuBar->addAction(menuAlgoritm->menuAction());
        menuMaze->addSeparator();
        menuMaze->addAction(actionUniqpath);
        menuMaze->addAction(actionfMuliplepath);
        menuVisualisering->addAction(actionSlow);
        menuVisualisering->addAction(actionNormal);
        menuVisualisering->addAction(actionFast);
        menuVisualisering->addAction(actionUltrafast);
        menuAlgoritm->addAction(actionSearchRecursive);
        menuAlgoritm->addAction(actionSearchFIFO);
        mainToolBar->addAction(actionfMuliplepath);
        mainToolBar->addAction(actionUniqpath);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSlow);
        mainToolBar->addAction(actionNormal);
        mainToolBar->addAction(actionFast);
        mainToolBar->addAction(actionUltrafast);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSearchRecursive);
        mainToolBar->addAction(actionSearchFIFO);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSlow->setText(QCoreApplication::translate("MainWindow", "l\303\245ngsam", nullptr));
        actionNormal->setText(QCoreApplication::translate("MainWindow", "lagom", nullptr));
        actionFast->setText(QCoreApplication::translate("MainWindow", "snabb", nullptr));
        actionUltrafast->setText(QCoreApplication::translate("MainWindow", "supersnabb", nullptr));
        actionSearchRecursive->setText(QCoreApplication::translate("MainWindow", "Rekursiv", nullptr));
        actionSearchFIFO->setText(QCoreApplication::translate("MainWindow", "FIFO", nullptr));
        actionUniqpath->setText(QCoreApplication::translate("MainWindow", "unikv\303\244gslabyrint", nullptr));
#if QT_CONFIG(tooltip)
        actionUniqpath->setToolTip(QCoreApplication::translate("MainWindow", "endast en v\303\244g mellan start & m\303\245l", nullptr));
#endif // QT_CONFIG(tooltip)
        actionfMuliplepath->setText(QCoreApplication::translate("MainWindow", "flerv\303\244gslabyrint", nullptr));
#if QT_CONFIG(tooltip)
        actionfMuliplepath->setToolTip(QCoreApplication::translate("MainWindow", "flera v\303\244gar mellan start & m\303\245l", nullptr));
#endif // QT_CONFIG(tooltip)
        menuMaze->setTitle(QCoreApplication::translate("MainWindow", "Maze", nullptr));
        menuVisualisering->setTitle(QCoreApplication::translate("MainWindow", "Visualisering", nullptr));
        menuAlgoritm->setTitle(QCoreApplication::translate("MainWindow", "Algoritm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
