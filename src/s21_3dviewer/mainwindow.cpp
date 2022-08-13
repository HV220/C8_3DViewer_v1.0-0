#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widget.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    connect(ui->change_move, SIGNAL(clicked()), this, SLOT(on_change_move_clicked()));
//    connect(ui->download_obj, SIGNAL(clicked()), this, SLOT(on_download_obj_clicked()));
//    ui->change_move->setCheckable(true);
//    ui->download_obj->setCheckable(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_download_obj_clicked()
{
   // if (ui->download_obj->isChecked()){
    p_test = new Widget(this);
    p_test->show();
  //  ui->download_obj->setCheckable(false);
  //  }
}





void MainWindow::on_change_move_clicked()
{
    double x = ui->move_x->text().toDouble();
    double y = ui->move_y->text().toDouble();
    double z = ui->move_z->text().toDouble();
    p_test->for_move(x,y,z);
    ui->widget->update();
}


void MainWindow::on_change_rot_clicked()
{
    double x = ui->rot_x->text().toDouble();
    double y = ui->rot_y->text().toDouble();
    double z = ui->rot_z->text().toDouble();
    p_test->for_rot(x, y, z);
    ui->widget->update();
}


void MainWindow::on_change_scale_clicked()
{
    double x = ui->scale->text().toDouble();
    p_test->for_scale(x);
    ui->widget->update();
}

