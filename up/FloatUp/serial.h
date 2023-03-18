#ifndef SERIAL_H
#define SERIAL_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QTimer>

#define pass (void)0
class Serial : public QObject
{
    Q_OBJECT
public:
    explicit Serial(QObject *parent = nullptr);

signals:
    void showData(const QByteArray data);
    void openOk();
    void openError();
    void closeOk();
public slots:
    void readData();
    void writeData(const QByteArray data);
    void open(QString name, int baundRate);
    void close();
    void handleError(QSerialPort::SerialPortError error);
    void checkStatus();

private:
//    QSerialPort m_serial;
//    QScopedPointer<QSerialPort> m_serial;
    QSerialPort *m_serial = nullptr;
    QTimer * timerCheck;
};

#endif // SERIAL_H
