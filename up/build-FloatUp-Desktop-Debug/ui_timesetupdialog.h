/********************************************************************************
** Form generated from reading UI file 'timesetupdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMESETUPDIALOG_H
#define UI_TIMESETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimeSetupDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTimeEdit *timeEdit;
    QPushButton *okButton;

    void setupUi(QDialog *TimeSetupDialog)
    {
        if (TimeSetupDialog->objectName().isEmpty())
            TimeSetupDialog->setObjectName(QString::fromUtf8("TimeSetupDialog"));
        TimeSetupDialog->resize(400, 300);
        verticalLayoutWidget = new QWidget(TimeSetupDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 401, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        timeEdit = new QTimeEdit(verticalLayoutWidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        QFont font;
        font.setPointSize(60);
        timeEdit->setFont(font);
        timeEdit->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));

        verticalLayout->addWidget(timeEdit);

        okButton = new QPushButton(TimeSetupDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(267, 243, 111, 41));
        QFont font1;
        font1.setPointSize(20);
        okButton->setFont(font1);

        retranslateUi(TimeSetupDialog);

        QMetaObject::connectSlotsByName(TimeSetupDialog);
    } // setupUi

    void retranslateUi(QDialog *TimeSetupDialog)
    {
        TimeSetupDialog->setWindowTitle(QCoreApplication::translate("TimeSetupDialog", "Dialog", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("TimeSetupDialog", "HH:mm:ss", nullptr));
        okButton->setText(QCoreApplication::translate("TimeSetupDialog", "Okay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimeSetupDialog: public Ui_TimeSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMESETUPDIALOG_H
