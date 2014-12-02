#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QBluetoothLocalDevice>
#include <QBluetoothDeviceInfo>
#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothServer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
   void startBTService();

signals:
    void messageReceived(const QString &sender, const QString &message);
    void clientConnected(const QString &name);
    void clientDisconnected(const QString &name);

private slots:
    void on_startButton_clicked();
    void clientConnected();
    void clientDisconnected();
    void readSocket();

private:
    Ui::MainWindow *ui;
    QBluetoothServer *rfcommServer;
       QBluetoothServiceInfo serviceInfo;
       QList<QBluetoothSocket *> clientSockets;
};

#endif // MAINWINDOW_H
