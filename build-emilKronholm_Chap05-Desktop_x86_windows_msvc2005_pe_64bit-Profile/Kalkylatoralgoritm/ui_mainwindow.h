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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionragnarsTest;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *input;
    QLabel *result;
    QCheckBox *checkImplicitEqual;
    QGroupBox *stackboxTokens;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *stackboxValues;
    QVBoxLayout *verticalLayout;
    QSpacerItem *spacerValues;
    QGroupBox *stackboxOperators;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *spacerOps;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QMenu *menuTest;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(617, 450);
        actionragnarsTest = new QAction(MainWindow);
        actionragnarsTest->setObjectName("actionragnarsTest");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        input = new QLineEdit(centralWidget);
        input->setObjectName("input");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(30);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(input->sizePolicy().hasHeightForWidth());
        input->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(32);
        input->setFont(font);

        horizontalLayout->addWidget(input);

        result = new QLabel(centralWidget);
        result->setObjectName("result");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy1);
        result->setFont(font);
        result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(result);


        verticalLayout_3->addLayout(horizontalLayout);

        checkImplicitEqual = new QCheckBox(centralWidget);
        checkImplicitEqual->setObjectName("checkImplicitEqual");
        QFont font1;
        font1.setPointSize(13);
        checkImplicitEqual->setFont(font1);
        checkImplicitEqual->setChecked(true);

        verticalLayout_3->addWidget(checkImplicitEqual);

        stackboxTokens = new QGroupBox(centralWidget);
        stackboxTokens->setObjectName("stackboxTokens");
        horizontalLayout_3 = new QHBoxLayout(stackboxTokens);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(stackboxTokens);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        stackboxValues = new QGroupBox(centralWidget);
        stackboxValues->setObjectName("stackboxValues");
        verticalLayout = new QVBoxLayout(stackboxValues);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        spacerValues = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerValues);


        horizontalLayout_2->addWidget(stackboxValues);

        stackboxOperators = new QGroupBox(centralWidget);
        stackboxOperators->setObjectName("stackboxOperators");
        verticalLayout_2 = new QVBoxLayout(stackboxOperators);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        spacerOps = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(spacerOps);


        horizontalLayout_2->addWidget(stackboxOperators);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 617, 22));
        menuTest = new QMenu(menuBar);
        menuTest->setObjectName("menuTest");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuTest->menuAction());
        mainToolBar->addAction(actionragnarsTest);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Kalkylatoralgoritm", nullptr));
        actionragnarsTest->setText(QCoreApplication::translate("MainWindow", "ragnarsTest", nullptr));
        input->setText(QString());
        result->setText(QString());
        checkImplicitEqual->setText(QCoreApplication::translate("MainWindow", "L\303\244gg till ett lika-med-token sist", nullptr));
        stackboxTokens->setTitle(QCoreApplication::translate("MainWindow", "tokens", nullptr));
        stackboxValues->setTitle(QCoreApplication::translate("MainWindow", "values", nullptr));
        stackboxOperators->setTitle(QCoreApplication::translate("MainWindow", "operators", nullptr));
        menuTest->setTitle(QCoreApplication::translate("MainWindow", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
