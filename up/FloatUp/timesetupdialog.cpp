#include "timesetupdialog.h"
#include "ui_timesetupdialog.h"

TimeSetupDialog::TimeSetupDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TimeSetupDialog)
{
    ui->setupUi(this);
}

TimeSetupDialog::~TimeSetupDialog()
{
    delete ui;
}

void TimeSetupDialog::on_okButton_clicked()
{
    int hours = ui->timeEdit->time().hour();
    int minutes = ui->timeEdit->time().minute();
    int seconds = ui->timeEdit->time().second();
    QString hs, ms, ss;
    hs = QString::number(hours); ms = QString::number(minutes); ss = QString::number(seconds);
    if (hours < 10) hs = "0" + hs;
    if (minutes < 10) ms = "0" + ms;
    if (seconds < 10) ss = "0" + ss;
    QString data = hs + ms + ss;
    emit timeready(data);

}
