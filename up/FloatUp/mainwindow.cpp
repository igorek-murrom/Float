#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_s(new Serial)
    , m_tsd(new TimeSetupDialog(this))
{
    ui->setupUi(this);
    ClearBar();
    updateCombobox();
    connect(m_s, SIGNAL(showData(QByteArray)), this, SLOT(Add2Bar(QByteArray)));
    connect(m_s, SIGNAL(openStatus(bool)), this, SLOT(change_color_connect(bool)));
    connect(m_tsd, SIGNAL(timeready(QString)), SLOT(writeTimeSet(QString)));
    connect(m_s, SIGNAL(nonConnected()), this, SLOT(printConErr()));
}

MainWindow::~MainWindow()
{
    delete ui;
    m_s->close();
}

void MainWindow::printConErr() {
    QMessageBox::warning(this, "Внимание","Сначала подключение порта");
}

void MainWindow::Add2Bar(const QByteArray data) {
    QString dataS = QString(data);
    ui->list->addItem(dataS);
    if (flagScroll) {
        ui->list->scrollToBottom();
    }
}

void MainWindow::ClearBar() {
    ui->list->clear();
}

void MainWindow::updateCombobox(){
    ui->comboBox->clearEditText();
    ui->comboBox->clear();
    const auto infos = QSerialPortInfo::availablePorts();
    for(const QSerialPortInfo &info : infos )
    {
        QString s = info.portName();
        ui->comboBox->addItem(s);
    }
    if (!infos.empty()) {
        ui->comboBox->setCurrentText(infos[0].portName());
    }
}

//buttons
void MainWindow::on_ConnectButton_clicked()
{
    if (flagConnect) {
        QString name = ui->comboBox->currentText();
        m_s->open(name, 9600);
    }
    else {
        m_s->close();
    }
    flagConnect = !flagConnect;
}

void MainWindow::on_StartButton_clicked()
{
    m_s->writeData("s");
}

void MainWindow::on_dataButton_clicked()
{
    if (flagData) m_s->writeData("d");
    else m_s->writeData("c");
    flagData = !flagData;
}

void MainWindow::on_resetButton_clicked()
{
    m_s->writeData("r");
}

void MainWindow::on_settimeButton_clicked()
{
    m_tsd->show();
}

void MainWindow::writeTimeSet(QString data)
{
    m_tsd->close();
    data = "t" + data + "x";
    m_s->writeData(data.toUtf8());
}

void MainWindow::on_scrollButton_clicked()
{
    QColor colour;
    if (flagScroll) {colour = Qt::blue;}
    else {colour = Qt::white;}
    QPalette pal = ui->scrollButton->palette();
    pal.setColor(QPalette::Button, colour);
    ui->scrollButton->setAutoFillBackground(true);
    ui->scrollButton->setPalette(pal);
    ui->scrollButton->update();
    flagScroll = !flagScroll;
}

void MainWindow::on_ClearButton_clicked()
{
    ClearBar();
}

void MainWindow::on_updateButton_clicked()
{
    updateCombobox();
}


//connect/disconnect
void MainWindow::change_color_connect(bool f) {
    QColor colour;
    if (f) {colour = Qt::green;}
    else {colour = Qt::white;}
    QPalette pal = ui->ConnectButton->palette();
    pal.setColor(QPalette::Button, QColor(colour));
    ui->ConnectButton->setAutoFillBackground(true);
    ui->ConnectButton->setPalette(pal);
    ui->ConnectButton->update();
}
