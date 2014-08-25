#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QTimer>
#include <QLabel>

namespace Ui {
class MainWindow;
class Sprite;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void _update();

private:
    Ui::MainWindow *ui;
    QWidget * _centralWidget;
    QTimer * _updateTimer;
    QLabel * _myLabel;
    int _count;
};

#endif // MAINWINDOW_H
