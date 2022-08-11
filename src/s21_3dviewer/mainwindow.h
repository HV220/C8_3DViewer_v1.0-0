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
    Widget *p_test;

private slots:
    void on_download_obj_clicked();


    void on_edgecol_red_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
