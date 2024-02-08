#include "serial.h"

Serial::Serial(QObject *parent) : QObject(parent)
  , m_serial(new QSerialPort(this))
  , m_timer(new QTimer())
{
    old_status = status;
    connect(m_serial, SIGNAL(readyRead()), this, SLOT(readData()));
    connect(m_serial, SIGNAL(errorOccurred(QSerialPort::SerialPortError)), this,
                SLOT(handleError(QSerialPort::SerialPortError)));
    connect(m_timer, SIGNAL(timeout()), this, SLOT(loop()));
    m_timer->start(20);
}

void Serial::loop() {
    if (status != old_status) emit changeStatus();
    old_status = status;
}

void Serial::handleError(QSerialPort::SerialPortError error) {
    qDebug() << error;
    close();
}

void Serial::readData()
{
    if (m_serial->isOpen()) {
        if (m_serial->canReadLine()) {
            const QByteArray data = m_serial->readLine();
            m_serial->clear();
            emit showData(data);
        }
    }
    else {emit sendError("Сначало подключение порта");}
}

void Serial::writeData(QByteArray data) {
    if (m_serial->isOpen()) {
        data.push_back('\n');
        int q = m_serial->write(data);
        qDebug() << data << " " << q;
    }
    else {emit sendError("Сначало подключение порта");}
}

void Serial::open(QString name, int baundRate=9600) {
    m_serial->setPortName(name);
    m_serial->setBaudRate(baundRate);

    if (m_serial->open(QIODevice::ReadWrite)) {
        m_serial->write("ok\n");
        status = true;
    }
    else {
        m_serial->close();
        status = false;
    }
}

void Serial::close() {
    if (m_serial->isOpen()) {
        m_serial->close();
        status = false;
    }
}
