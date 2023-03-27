#include "timesetupdialog.h"
#include "ui_timesetupdialog.h"

TimeSetupDialog::TimeSetupDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TimeSetupDialog)
{
    ui->setupUi(this);
    setWindowTitle("Set Time");
}

TimeSetupDialog::~TimeSetupDialog() {
    delete ui;
}

void TimeSetupDialog::on_okButton_clicked() {
    int hours = ui->timeEdit->time().hour();
    int minutes = ui->timeEdit->time().minute();
    int seconds = ui->timeEdit->time().second();
    QString data = fixTime(hours) + fixTime(minutes) + fixTime(seconds);
//    qDebug() << data;
    emit timeready(data);

}

QString TimeSetupDialog::fixTime(int num) {
    QString s = "";
    if (num < 10) s += "0";
    s += QString::number(num);
    return s;
}
