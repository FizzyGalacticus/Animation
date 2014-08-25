#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include <sprite.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    _centralWidget(new QWidget),
    _updateTimer(new QTimer(this)),
    _myLabel(new QLabel(_centralWidget)),
    _count(0)
{
    ui->setupUi(this);
    this->setCentralWidget(_centralWidget);
    _centralWidget->setLayout(new QVBoxLayout);

    connect(_updateTimer, SIGNAL(timeout()), this, SLOT(_update()));
    _updateTimer->start(20);

    Sprite("/home/dustin/Pictures/wallpaper-2998450.jpg",240,240,1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::_update()
{
    _myLabel->setText(QString::number(_count++));
}
