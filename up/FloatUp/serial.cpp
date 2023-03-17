#include "serial.h"

Serial::Serial(QObject *parent) : QObject(parent)
  , m_serial(new QSerialPort(this))
{
//    connect(m_serial, &QSerialPort::readyRead, this, Serial::readData());
    connect(m_serial, SIGNAL(readyRead()), this, SLOT(readData()));

}


void Serial::readData()
{
    const QByteArray data = m_serial->readAll();
    emit showData(data);
}


void Serial::writeData(const QByteArray data) {
    m_serial->write(data);
}


void Serial::open(QString name, int baundRate) {
    m_serial->setPortName(name);
    m_serial->setBaudRate(baundRate);
//    m_serial->setDataBits(dataBits);
//    m_serial->setParity(parity);
//    m_serial->setStopBits(stopBits);
//    m_serial->setFlowControl(flowControl);
    if (m_serial->open(QIODevice::ReadWrite)) {
       emit openOk();
    }
    else {
       emit openError();
    }
}
