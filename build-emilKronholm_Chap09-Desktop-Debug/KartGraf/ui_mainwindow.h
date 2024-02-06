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
#include "mapwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionUSA;
    QAction *actionRandom_A;
    QAction *actionUSA_FLYG;
    QAction *action5Noder;
    QAction *actionRagnarsTest;
    QAction *actionAstar;
    QAction *actionShortest2;
    QAction *actionLenna;
    QAction *actionLenna_diff;
    MapWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuGrafer;
    QMenu *menuTest;
    QMenu *menuModifieringar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(547, 415);
        actionUSA = new QAction(MainWindow);
        actionUSA->setObjectName("actionUSA");
        actionRandom_A = new QAction(MainWindow);
        actionRandom_A->setObjectName("actionRandom_A");
        actionUSA_FLYG = new QAction(MainWindow);
        actionUSA_FLYG->setObjectName("actionUSA_FLYG");
        action5Noder = new QAction(MainWindow);
        action5Noder->setObjectName("action5Noder");
        actionRagnarsTest = new QAction(MainWindow);
        actionRagnarsTest->setObjectName("actionRagnarsTest");
        actionAstar = new QAction(MainWindow);
        actionAstar->setObjectName("actionAstar");
        actionAstar->setCheckable(true);
        actionAstar->setChecked(false);
        actionShortest2 = new QAction(MainWindow);
        actionShortest2->setObjectName("actionShortest2");
        actionLenna = new QAction(MainWindow);
        actionLenna->setObjectName("actionLenna");
        actionLenna_diff = new QAction(MainWindow);
        actionLenna_diff->setObjectName("actionLenna_diff");
        centralWidget = new MapWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 547, 22));
        menuGrafer = new QMenu(menuBar);
        menuGrafer->setObjectName("menuGrafer");
        menuTest = new QMenu(menuBar);
        menuTest->setObjectName("menuTest");
        menuModifieringar = new QMenu(menuBar);
        menuModifieringar->setObjectName("menuModifieringar");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGrafer->menuAction());
        menuBar->addAction(menuTest->menuAction());
        menuBar->addAction(menuModifieringar->menuAction());
        menuGrafer->addAction(actionUSA);
        menuGrafer->addAction(actionUSA_FLYG);
        menuGrafer->addAction(actionRandom_A);
        menuGrafer->addAction(action5Noder);
        menuTest->addAction(actionRagnarsTest);
        menuModifieringar->addAction(actionAstar);
        mainToolBar->addAction(actionUSA);
        mainToolBar->addAction(actionUSA_FLYG);
        mainToolBar->addAction(action5Noder);
        mainToolBar->addAction(actionRandom_A);
        mainToolBar->addAction(actionLenna);
        mainToolBar->addAction(actionLenna_diff);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRagnarsTest);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionUSA->setText(QCoreApplication::translate("MainWindow", "USA", nullptr));
        actionRandom_A->setText(QCoreApplication::translate("MainWindow", "Random A", nullptr));
        actionUSA_FLYG->setText(QCoreApplication::translate("MainWindow", "USA+FLYG", nullptr));
        action5Noder->setText(QCoreApplication::translate("MainWindow", "5Noder", nullptr));
        actionRagnarsTest->setText(QCoreApplication::translate("MainWindow", "RagnarsTest", nullptr));
        actionAstar->setText(QCoreApplication::translate("MainWindow", "A*", nullptr));
        actionShortest2->setText(QCoreApplication::translate("MainWindow", "Shortest2", nullptr));
        actionLenna->setText(QCoreApplication::translate("MainWindow", "Lenna", nullptr));
        actionLenna_diff->setText(QCoreApplication::translate("MainWindow", "Lenna diff", nullptr));
        menuGrafer->setTitle(QCoreApplication::translate("MainWindow", "Grafer", nullptr));
        menuTest->setTitle(QCoreApplication::translate("MainWindow", "Test", nullptr));
        menuModifieringar->setTitle(QCoreApplication::translate("MainWindow", "Modifieringar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
