#ifndef WIDGET_H
#define WIDGET_H

#define GL_SILENCE_DEPRECATION
#include <QWidget>
#include <QtOpenGLWidgets/qopenglwidget.h>
#include <QOpenGLFunctions>
#include <QGuiApplication>
#include <QTimer>
#include <QMouseEvent>

//#include "matrix_functions/s21_matrix.h"


extern "C" {
#include "s21_parsing_object.h"
//#include "matrix_functions/s21_matrix.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QOpenGLWidget
{
    Q_OBJECT
private:
    double xRot, yRot, zRot;
    QPoint mPos;
    void mousePressEvent(QMouseEvent *) override;
    void mouseMoveEvent(QMouseEvent *) override;
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void start();
    double r, g, b;
    double r1, g1, b1;
    double r2, g2, b2;
    double width;
    int line_type;
    int color_point;
    double point_size;
    int flag_for_start;
    char *fiename_global;

    data_t obj;


private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
