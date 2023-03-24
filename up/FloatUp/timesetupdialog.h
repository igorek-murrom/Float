#ifndef TIMESETUPDIALOG_H
#define TIMESETUPDIALOG_H

#include <QDialog>
#include <QDateEdit>
#include <QDebug>
namespace Ui {class TimeSetupDialog;}

class TimeSetupDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TimeSetupDialog(QWidget *parent = nullptr);
    ~TimeSetupDialog();
signals:
    void timeready(QString data);

private slots:
    void on_okButton_clicked();

private:
    Ui::TimeSetupDialog *ui;
    QString fixTime(int num);
};

#endif // TIMESETUPDIALOG_H
