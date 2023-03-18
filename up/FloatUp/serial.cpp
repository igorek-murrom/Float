#include "serial.h"

Serial::Serial(QObject *parent) : QObject(parent)
  , m_serial(new QSerialPort(this))
{
    timerCheck = new QTimer(this);
    connect(m_serial, SIGNAL(readyRead()), this, SLOT(readData()));
    connect(m_serial, SIGNAL(error(QSerialPort::SerialPortError)), this,
                SLOT(handleError(QSerialPort::SerialPortError)));
    connect(timerCheck, SIGNAL(timeout()), this, SLOT(checkStatus()));
    timerCheck->start(1000);
}


void Serial::readData()
{
    if (m_serial->isOpen() and m_serial->canReadLine()) {
        const QByteArray data = m_serial->readLine();
        emit showData(data);
    }

}

void Serial::handleError(QSerialPort::SerialPortError error) {
    if (error == QSerialPort::NotOpenError) {
        m_serial->close();
        emit openError();
    }
}

void Serial::writeData(const QByteArray data) {
    if (m_serial->isOpen()) {
        qDebug() << "f";
        m_serial->write(data);
    }
}

void Serial::open(QString name, int baundRate=9600) {
//    name = "/dev/" + name;
    m_serial->setPortName(name);
    m_serial->setBaudRate(baundRate);

//    m_serial->setDataBits(dataBits);
//    m_serial->setParity(parity);
//    m_serial->setStopBits(stopBits);
//    m_serial->setFlowControl(flowControl);
//    if (m_serial->open(QIODevice::ReadWrite)) {
    if (m_serial->open(QIODevice::ReadWrite)) {
        qDebug() << name << " " << baundRate;

       emit openOk();
    }
    else {
       emit openError();
    }
}

void Serial::close() {
    if (m_serial->isOpen()) {
        m_serial->close();
        emit closeOk();
    }
}

void Serial::checkStatus() {
    if (!m_serial->isOpen()) {
        close();
        emit openError();
    }
}
