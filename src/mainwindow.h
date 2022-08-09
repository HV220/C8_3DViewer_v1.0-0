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
//#include "s21_parsing_object.h"
//#include "matrix_functions/s21_matrix.h"
}

namespace Ui {
class MainWindow;
}

class mainwindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit mainwindow(QWidget *parent = nullptr);

private slots:


};

#endif // MAINWINDOW_H
