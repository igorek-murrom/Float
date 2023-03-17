#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "serial.h"
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

private:
    Ui::MainWindow *ui;
    Serial *m_s = nullptr;
};
#endif // MAINWINDOW_H
