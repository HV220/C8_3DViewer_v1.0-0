#ifndef WIDGET_H
#define WIDGET_H

#define GL_SILENCE_DEPRECATION
#include <QWidget>
#include <QtOpenGLWidgets/qopenglwidget.h>
#include <QOpenGLFunctions>
#include <QGuiApplication>
#include <QTimer>
#include <QMouseEvent>
#include <glu.h>
extern "C" {
#include "../backend/s21_parsing_object.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QOpenGLWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    double xRot, yRot, zRot;
    QPoint mPos;
    QString path_to_file;
    void mousePressEvent(QMouseEvent *) override;
    void mouseMoveEvent(QMouseEvent *) override;
    double r = 0, g = 0, b = 0;
    double r1 = 255, g1 = 255, b1 = 255;
    double r2 = 0, g2 = 0, b2 = 0;
    double width = 5, width_edge = 2;
    int min_x, max_x,min_y, max_y, min_z, max_z;
    int line_type = 0;
    int type_point = 0;
    double point_size;
    int flag_for_start;
    char *fiename_global;
    double *vertex;
    unsigned int *facets;
    data_t some_data;

public slots:
    void for_move(double x, double y, double z);
    void for_rot(double x, double y, double z);
    void for_scale(double x);
    void change_background_color(double x, double y, double z);
    void change_vertex_color(double x, double y, double z);
    void change_vertex_size(double x);
    void change_edge_color(double x, double y, double z);
    void change_edge_size(double x);
    void change_line_type_1(double x);
    void change_line_type_2(double x);
    void change_vertex_type(double x);

private:
    Ui::Widget *ui;
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    int validation_of_files(char* name_file);
    void errors(int error);
    void parcing_3d_files();
    void check_vertex_min_max(double check, int choise);
};
#endif // WIDGET_H
