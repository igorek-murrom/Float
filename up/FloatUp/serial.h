#ifndef SERIAL_H
#define SERIAL_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QTimer>
#include <QProcess>

#define pass (void)0
class Serial : public QObject
{
    Q_OBJECT
public:
    explicit Serial(QObject *parent = nullptr);

signals:
    void showData(const QByteArray data);
    void openStatus(bool f);
//    void openOk();
//    void openError();
//    void closeOk();
    void sendError(QString);

public slots:
    void readData();
    void writeData(QByteArray data);
    void open(QString name, int baundRate);
    void close();
    void handleError(QSerialPort::SerialPortError error);

private:
    QSerialPort *m_serial = nullptr;
    QTimer * timerCheck;
    QProcess proc;
};

#endif // SERIAL_H
