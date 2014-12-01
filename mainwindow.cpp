#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::startBTService(){
//// Check if Bluetooth is available on this device
//if (localDevice.isValid()) {

//    // Turn Bluetooth on
//    localDevice.powerOn();

//    // Read local device name
//    localDeviceName = localDevice.name();

//    // Make it visible to others
//    localDevice.setHostMode(QBluetoothLocalDevice::HostDiscoverable);

//    // Get connected devices
//    QList<QBluetoothAddress> remotes;
//    remotes = localDevice.connectedDevices();
//}
//}

//void MainWindow::startDeviceDiscovery()
//{
//    //START BT
//    startBTService();

//    // Create a discovery agent and connect to its signals
//    QBluetoothDeviceDiscoveryAgent *discoveryAgent = new QBluetoothDeviceDiscoveryAgent(this);
//    connect(discoveryAgent, SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)),
//            this, SLOT(deviceDiscovered(QBluetoothDeviceInfo)));

//    // Start a discovery
//    discoveryAgent->start();

//    //...
//}

// In your local slot, read information about the found devices
//void MainWindow::deviceDiscovered(const QBluetoothDeviceInfo &device)
//{
//    qDebug() << "Found new device:" << device.name() << '(' << device.address().toString() << ')';
//}

void MainWindow::on_startButton_clicked()
{
     qDebug() << "BUTTON HANDLER";
}
