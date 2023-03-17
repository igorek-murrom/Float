#ifndef SERIAL_H
#define SERIAL_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
class Serial : public QObject
{
    Q_OBJECT
public:
    explicit Serial(QObject *parent = nullptr);

signals:
    void showData(const QByteArray data);
    void openOk();
    void openError();
public slots:
    void readData();
    void writeData(const QByteArray data);
    void open(QString name, int baundRate);

private:
//    QSerialPort m_serial;
//    QScopedPointer<QSerialPort> m_serial;
    QSerialPort *m_serial = nullptr;

};

#endif // SERIAL_H
