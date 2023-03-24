#include "serial.h"

Serial::Serial(QObject *parent) : QObject(parent)
  , m_serial(new QSerialPort(this))
{
    connect(m_serial, SIGNAL(readyRead()), this, SLOT(readData()));
    connect(m_serial, SIGNAL(error(QSerialPort::SerialPortError)), this,
                SLOT(handleError(QSerialPort::SerialPortError)));
}

void Serial::handleError(QSerialPort::SerialPortError error) {
    qDebug() << error;
    close();
    emit openStatus(false);
}

void Serial::readData()
{
    if (m_serial->isOpen()) {
        if (m_serial->canReadLine()) {
            const QByteArray data = m_serial->readLine();
            emit showData(data);
        }
    }
    else {emit nonConnected();}
}

void Serial::writeData(const QByteArray data) {
    if (m_serial->isOpen()) {
        m_serial->write(data);
    }
    else {emit nonConnected();}
}

void Serial::open(QString name, int baundRate=9600) {
    m_serial->setPortName(name);
    m_serial->setBaudRate(baundRate);

    if (m_serial->open(QIODevice::ReadWrite)) {
        emit openStatus(true);
    }
    else {
        m_serial->close();
        emit openStatus(false);
    }
}

void Serial::close() {
    if (m_serial->isOpen()) {
        m_serial->close();
        emit openStatus(false);
    }
}
