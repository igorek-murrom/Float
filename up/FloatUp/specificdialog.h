#ifndef SPECIFICDIALOG_H
#define SPECIFICDIALOG_H

#include <QDialog>

namespace Ui {class SpecificDialog;}

class SpecificDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SpecificDialog(QWidget *parent = nullptr);
    ~SpecificDialog();

signals:
    void specificready(QString data);

private slots:
    void on_okButton_clicked();

private:
    Ui::SpecificDialog *ui;
};

#endif // SPECIFICDIALOG_H
