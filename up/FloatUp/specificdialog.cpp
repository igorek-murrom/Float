#include "specificdialog.h"
#include "ui_specificdialog.h"

SpecificDialog::SpecificDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SpecificDialog)
{
    ui->setupUi(this);
    setWindowTitle("Write Specific Command");
    ui->text->clear();
}

SpecificDialog::~SpecificDialog()
{
    delete ui;
}

void SpecificDialog::on_okButton_clicked()
{
    QString data = ui->text->text();
    emit specificready(data);
}

