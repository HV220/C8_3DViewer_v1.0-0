#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "widget.h"
#include <QFileDialog>
#include <QVector>
#include <QImage>
//#include "../QtGifImage-master/src/gifimage/qgifimage.h"
#include <QPainter>
#include <QPixmap>
#include <QSize>
extern "C" {

}

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int flag;
    QVector<QImage> mas_image;
    void on_comboBox_activated(int index);

private slots:

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
