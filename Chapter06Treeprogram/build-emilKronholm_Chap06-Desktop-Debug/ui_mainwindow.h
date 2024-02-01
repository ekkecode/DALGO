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
#include "treeviewwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionrandom_tree;
    QAction *actioninsert;
    QAction *actiondelete;
    QAction *insert100Random;
    QAction *remove100Random;
    QAction *insertRemove1000RandomKeys;
    QAction *actionSlow;
    QAction *actionNormal;
    QAction *actionFast;
    QAction *actionUltrafast;
    QAction *actionPreOrder;
    QAction *actionInOrder;
    QAction *actionPostOrder;
    QAction *actionheight;
    QAction *actionnumberOfNodes;
    QAction *actionsave;
    QAction *actionread;
    QAction *actionflashNodesAtIncreasingDepth;
    QAction *actioncreate_random_search_tree;
    QAction *actionWorst_Case_AVL;
    QAction *actionRandom_AVL;
    QAction *actionRandom_NOT_AVL;
    QAction *actionshow_Colors;
    QAction *actionshow_Numbers;
    QAction *actioncontains;
    QAction *actiontestTree1;
    QAction *actiontestfunktion1;
    QAction *actiontestfunktion2;
    QAction *actiontestfunktion3;
    QAction *actiontestfunktion4;
    TreeViewWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menustd;
    QMenu *menuAVL;
    QMenu *menuvisual;
    QMenu *menuUppdrag;
    QMenu *menutr_dkl_ttring;
    QMenu *menuS_ktr_d_2;
    QMenu *menuSerialisering_2;
    QMenu *menutestfunktioner;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(573, 385);
        actionrandom_tree = new QAction(MainWindow);
        actionrandom_tree->setObjectName("actionrandom_tree");
        actioninsert = new QAction(MainWindow);
        actioninsert->setObjectName("actioninsert");
        actiondelete = new QAction(MainWindow);
        actiondelete->setObjectName("actiondelete");
        insert100Random = new QAction(MainWindow);
        insert100Random->setObjectName("insert100Random");
        remove100Random = new QAction(MainWindow);
        remove100Random->setObjectName("remove100Random");
        insertRemove1000RandomKeys = new QAction(MainWindow);
        insertRemove1000RandomKeys->setObjectName("insertRemove1000RandomKeys");
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
        actionPreOrder = new QAction(MainWindow);
        actionPreOrder->setObjectName("actionPreOrder");
        actionInOrder = new QAction(MainWindow);
        actionInOrder->setObjectName("actionInOrder");
        actionPostOrder = new QAction(MainWindow);
        actionPostOrder->setObjectName("actionPostOrder");
        actionheight = new QAction(MainWindow);
        actionheight->setObjectName("actionheight");
        actionnumberOfNodes = new QAction(MainWindow);
        actionnumberOfNodes->setObjectName("actionnumberOfNodes");
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName("actionsave");
        actionread = new QAction(MainWindow);
        actionread->setObjectName("actionread");
        actionflashNodesAtIncreasingDepth = new QAction(MainWindow);
        actionflashNodesAtIncreasingDepth->setObjectName("actionflashNodesAtIncreasingDepth");
        actioncreate_random_search_tree = new QAction(MainWindow);
        actioncreate_random_search_tree->setObjectName("actioncreate_random_search_tree");
        actionWorst_Case_AVL = new QAction(MainWindow);
        actionWorst_Case_AVL->setObjectName("actionWorst_Case_AVL");
        actionRandom_AVL = new QAction(MainWindow);
        actionRandom_AVL->setObjectName("actionRandom_AVL");
        actionRandom_NOT_AVL = new QAction(MainWindow);
        actionRandom_NOT_AVL->setObjectName("actionRandom_NOT_AVL");
        actionshow_Colors = new QAction(MainWindow);
        actionshow_Colors->setObjectName("actionshow_Colors");
        actionshow_Colors->setCheckable(true);
        actionshow_Colors->setChecked(true);
        actionshow_Numbers = new QAction(MainWindow);
        actionshow_Numbers->setObjectName("actionshow_Numbers");
        actionshow_Numbers->setCheckable(true);
        actionshow_Numbers->setChecked(true);
        actioncontains = new QAction(MainWindow);
        actioncontains->setObjectName("actioncontains");
        actiontestTree1 = new QAction(MainWindow);
        actiontestTree1->setObjectName("actiontestTree1");
        actiontestfunktion1 = new QAction(MainWindow);
        actiontestfunktion1->setObjectName("actiontestfunktion1");
        actiontestfunktion2 = new QAction(MainWindow);
        actiontestfunktion2->setObjectName("actiontestfunktion2");
        actiontestfunktion3 = new QAction(MainWindow);
        actiontestfunktion3->setObjectName("actiontestfunktion3");
        actiontestfunktion4 = new QAction(MainWindow);
        actiontestfunktion4->setObjectName("actiontestfunktion4");
        centralWidget = new TreeViewWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 573, 22));
        menustd = new QMenu(menuBar);
        menustd->setObjectName("menustd");
        menuAVL = new QMenu(menustd);
        menuAVL->setObjectName("menuAVL");
        menuvisual = new QMenu(menuBar);
        menuvisual->setObjectName("menuvisual");
        menuUppdrag = new QMenu(menuBar);
        menuUppdrag->setObjectName("menuUppdrag");
        menutr_dkl_ttring = new QMenu(menuUppdrag);
        menutr_dkl_ttring->setObjectName("menutr_dkl_ttring");
        menuS_ktr_d_2 = new QMenu(menuUppdrag);
        menuS_ktr_d_2->setObjectName("menuS_ktr_d_2");
        menuSerialisering_2 = new QMenu(menuUppdrag);
        menuSerialisering_2->setObjectName("menuSerialisering_2");
        menutestfunktioner = new QMenu(menuBar);
        menutestfunktioner->setObjectName("menutestfunktioner");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setIconSize(QSize(16, 16));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menustd->menuAction());
        menuBar->addAction(menuvisual->menuAction());
        menuBar->addAction(menuUppdrag->menuAction());
        menuBar->addAction(menutestfunktioner->menuAction());
        menustd->addAction(actionrandom_tree);
        menustd->addAction(menuAVL->menuAction());
        menustd->addSeparator();
        menustd->addAction(actionshow_Colors);
        menustd->addAction(actionshow_Numbers);
        menuAVL->addAction(actionWorst_Case_AVL);
        menuAVL->addAction(actionRandom_AVL);
        menuAVL->addAction(actionRandom_NOT_AVL);
        menuvisual->addAction(actionSlow);
        menuvisual->addAction(actionNormal);
        menuvisual->addAction(actionFast);
        menuvisual->addAction(actionUltrafast);
        menuUppdrag->addAction(menutr_dkl_ttring->menuAction());
        menuUppdrag->addAction(menuS_ktr_d_2->menuAction());
        menuUppdrag->addAction(menuSerialisering_2->menuAction());
        menutr_dkl_ttring->addAction(actiontestTree1);
        menutr_dkl_ttring->addSeparator();
        menutr_dkl_ttring->addAction(actionPreOrder);
        menutr_dkl_ttring->addAction(actionInOrder);
        menutr_dkl_ttring->addAction(actionPostOrder);
        menutr_dkl_ttring->addSeparator();
        menutr_dkl_ttring->addAction(actionflashNodesAtIncreasingDepth);
        menutr_dkl_ttring->addSeparator();
        menutr_dkl_ttring->addAction(actionheight);
        menutr_dkl_ttring->addAction(actionnumberOfNodes);
        menuS_ktr_d_2->addAction(actioninsert);
        menuS_ktr_d_2->addAction(actioncontains);
        menuS_ktr_d_2->addAction(actiondelete);
        menuS_ktr_d_2->addSeparator();
        menuS_ktr_d_2->addAction(actioncreate_random_search_tree);
        menuS_ktr_d_2->addSeparator();
        menuS_ktr_d_2->addAction(insert100Random);
        menuS_ktr_d_2->addAction(remove100Random);
        menuS_ktr_d_2->addAction(insertRemove1000RandomKeys);
        menuSerialisering_2->addAction(actionsave);
        menuSerialisering_2->addAction(actionread);
        menutestfunktioner->addAction(actiontestfunktion1);
        menutestfunktioner->addAction(actiontestfunktion2);
        menutestfunktioner->addAction(actiontestfunktion3);
        menutestfunktioner->addAction(actiontestfunktion4);
        mainToolBar->addAction(actionrandom_tree);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSlow);
        mainToolBar->addAction(actionNormal);
        mainToolBar->addAction(actionFast);
        mainToolBar->addAction(actionUltrafast);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Tr\303\244dprogrammet", nullptr));
        actionrandom_tree->setText(QCoreApplication::translate("MainWindow", "create random tree", nullptr));
        actioninsert->setText(QCoreApplication::translate("MainWindow", "insert...", nullptr));
        actiondelete->setText(QCoreApplication::translate("MainWindow", "delete ...", nullptr));
        insert100Random->setText(QCoreApplication::translate("MainWindow", "insert 100 random keys", nullptr));
        remove100Random->setText(QCoreApplication::translate("MainWindow", "remove 100 random keys", nullptr));
        insertRemove1000RandomKeys->setText(QCoreApplication::translate("MainWindow", "insert/remove 1000 random keys", nullptr));
        actionSlow->setText(QCoreApplication::translate("MainWindow", "l\303\245ngsam", nullptr));
        actionNormal->setText(QCoreApplication::translate("MainWindow", "lagom", nullptr));
        actionFast->setText(QCoreApplication::translate("MainWindow", "snabb", nullptr));
        actionUltrafast->setText(QCoreApplication::translate("MainWindow", "lightspeed", nullptr));
        actionPreOrder->setText(QCoreApplication::translate("MainWindow", "flashPreOrder", nullptr));
        actionInOrder->setText(QCoreApplication::translate("MainWindow", "flashInOrder", nullptr));
        actionPostOrder->setText(QCoreApplication::translate("MainWindow", "flashPostOrder", nullptr));
        actionheight->setText(QCoreApplication::translate("MainWindow", "height", nullptr));
        actionnumberOfNodes->setText(QCoreApplication::translate("MainWindow", "numberOfNodes", nullptr));
        actionsave->setText(QCoreApplication::translate("MainWindow", "save...", nullptr));
        actionread->setText(QCoreApplication::translate("MainWindow", "read...", nullptr));
        actionflashNodesAtIncreasingDepth->setText(QCoreApplication::translate("MainWindow", "flashNodesAtIncreasingDepth", nullptr));
        actioncreate_random_search_tree->setText(QCoreApplication::translate("MainWindow", "create random search tree...", nullptr));
        actionWorst_Case_AVL->setText(QCoreApplication::translate("MainWindow", "Worst Case AVL", nullptr));
        actionRandom_AVL->setText(QCoreApplication::translate("MainWindow", "Random AVL", nullptr));
        actionRandom_NOT_AVL->setText(QCoreApplication::translate("MainWindow", "Random NOT AVL", nullptr));
        actionshow_Colors->setText(QCoreApplication::translate("MainWindow", "show Colors", nullptr));
        actionshow_Numbers->setText(QCoreApplication::translate("MainWindow", "show Numbers", nullptr));
        actioncontains->setText(QCoreApplication::translate("MainWindow", "contains?...", nullptr));
        actiontestTree1->setText(QCoreApplication::translate("MainWindow", "testTree1", nullptr));
        actiontestfunktion1->setText(QCoreApplication::translate("MainWindow", "testfunktion1", nullptr));
        actiontestfunktion2->setText(QCoreApplication::translate("MainWindow", "testfunktion2", nullptr));
        actiontestfunktion3->setText(QCoreApplication::translate("MainWindow", "testfunktion3", nullptr));
        actiontestfunktion4->setText(QCoreApplication::translate("MainWindow", "testfunktion4", nullptr));
        menustd->setTitle(QCoreApplication::translate("MainWindow", "std", nullptr));
        menuAVL->setTitle(QCoreApplication::translate("MainWindow", "AVL", nullptr));
        menuvisual->setTitle(QCoreApplication::translate("MainWindow", "visual", nullptr));
        menuUppdrag->setTitle(QCoreApplication::translate("MainWindow", "Uppdrag", nullptr));
        menutr_dkl_ttring->setTitle(QCoreApplication::translate("MainWindow", "tr\303\244dkl\303\244ttring", nullptr));
        menuS_ktr_d_2->setTitle(QCoreApplication::translate("MainWindow", "S\303\266ktr\303\244d", nullptr));
        menuSerialisering_2->setTitle(QCoreApplication::translate("MainWindow", "Serialisering", nullptr));
        menutestfunktioner->setTitle(QCoreApplication::translate("MainWindow", "testfunktioner", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
