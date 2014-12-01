#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
   //void startBTService();
   //void startDeviceDiscovery();
   //void deviceDiscovered(const QBluetoothDeviceInfo device);

private slots:
    void on_startButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
