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
    bool status = false;

signals:
    void showData(const QByteArray data);
    void changeStatus();
    void sendError(QString);

public slots:
    void readData();
    void writeData(QByteArray data);
    void open(QString name, int baundRate);
    void close();
    void handleError(QSerialPort::SerialPortError error);

private slots:
    void loop();

private:
    QSerialPort *m_serial = nullptr;
    QTimer * m_timer;
    bool old_status;
};

#endif // SERIAL_H
