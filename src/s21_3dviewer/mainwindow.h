#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "widget.h"
#include <QFileDialog>
#include <QVector>
#include <QImage>
#include <QPainter>
#include <QPixmap>
#include <QSize>
extern "C" {
#include "../backend/s21_parsing_object.h"
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
    Widget *p_test;

private slots:
    void on_download_obj_clicked();

    void on_change_move_clicked();

    void on_change_rot_clicked();

    void on_change_scale_clicked();

    void on_background_white_clicked();

    void on_change_vertex_color_clicked();

    void on_change_vertex_size_clicked();

    void on_change_edge_color_clicked();

    void on_change_edge_size_clicked();

    void on_stipple_on_clicked();

    void on_stipple_off_clicked();

    void on_vertextype_round_clicked();

    void on_vertextype_square_clicked();

    void on_vertextype_none_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
