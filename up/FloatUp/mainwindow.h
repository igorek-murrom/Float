#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "serial.h"
#include "timesetupdialog.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void Add2Bar(const QByteArray data);
    void ClearBar();
    void writeTimeSet(QString data);
    void printConErr();


private slots:
    void on_StartButton_clicked();
    void on_dataButton_clicked();
    void on_resetButton_clicked();
    void on_settimeButton_clicked();
    void on_scrollButton_clicked();
    void on_ClearButton_clicked();
    void on_ConnectButton_clicked();
    void on_updateButton_clicked();
    void change_color_connect();
    void change_color_disconnect();

private:
    Ui::MainWindow *ui;
    TimeSetupDialog *m_tsd;
    Serial *m_s = nullptr;
    bool flagData = true;
    bool flagScroll = false;
    bool flagConnect = true;
    void updateCombobox();
};
#endif // MAINWINDOW_H
