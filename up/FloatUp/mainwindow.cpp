#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_s(new Serial)
{
    ui->setupUi(this);
    ClearBar();
    connect(m_s, SIGNAL(showData(QByteArray)), this, SLOT(Add2Bar(QByteArray)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Add2Bar(const QByteArray data) {
    QString dataS = QString(data);
    ui->list->addItem(dataS);
}

void MainWindow::ClearBar() {
    ui->list->clear();
}
