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
    void mousePressEvent(QMouseEvent *) override;
    void mouseMoveEvent(QMouseEvent *) override;
    double r, g, b;
    double r1, g1, b1;
    double r2, g2, b2;
    double width;
    double min_x, max_x,min_y, max_y, min_z, max_z;
    int line_type;
    int color_point;
    double point_size;
    int flag_for_start;
    char *fiename_global;
    double *vertex;
    unsigned int *facets;
    data_t some_data;

public slots:
    //void change_color();
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
