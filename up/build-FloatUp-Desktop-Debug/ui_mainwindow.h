/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *list;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Panel;
    QPushButton *StartButton;
    QPushButton *dataButton;
    QPushButton *resetButton;
    QPushButton *settimeButton;
    QPushButton *ClearButton;
    QPushButton *scrollButton;
    QPushButton *ConnectButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *updateButton;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(644, 324);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        list = new QListWidget(centralwidget);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(230, 0, 451, 301));
        list->setBatchSize(100);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 231, 309));
        Panel = new QVBoxLayout(verticalLayoutWidget);
        Panel->setSpacing(15);
        Panel->setObjectName(QString::fromUtf8("Panel"));
        Panel->setContentsMargins(0, 0, 0, 0);
        StartButton = new QPushButton(verticalLayoutWidget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));

        Panel->addWidget(StartButton);

        dataButton = new QPushButton(verticalLayoutWidget);
        dataButton->setObjectName(QString::fromUtf8("dataButton"));

        Panel->addWidget(dataButton);

        resetButton = new QPushButton(verticalLayoutWidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        Panel->addWidget(resetButton);

        settimeButton = new QPushButton(verticalLayoutWidget);
        settimeButton->setObjectName(QString::fromUtf8("settimeButton"));

        Panel->addWidget(settimeButton);

        ClearButton = new QPushButton(verticalLayoutWidget);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));

        Panel->addWidget(ClearButton);

        scrollButton = new QPushButton(verticalLayoutWidget);
        scrollButton->setObjectName(QString::fromUtf8("scrollButton"));

        Panel->addWidget(scrollButton);

        ConnectButton = new QPushButton(verticalLayoutWidget);
        ConnectButton->setObjectName(QString::fromUtf8("ConnectButton"));

        Panel->addWidget(ConnectButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        updateButton = new QPushButton(verticalLayoutWidget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));

        horizontalLayout->addWidget(updateButton);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);

        Panel->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 644, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        StartButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        dataButton->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        settimeButton->setText(QCoreApplication::translate("MainWindow", "Set Time", nullptr));
        ClearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        scrollButton->setText(QCoreApplication::translate("MainWindow", "Scroll", nullptr));
        ConnectButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        updateButton->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
