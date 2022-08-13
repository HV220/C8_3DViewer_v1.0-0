#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widget.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_download_obj_clicked()
{
    p_test = new Widget(this);
    p_test->show();
}





void MainWindow::on_change_move_clicked()
{
    double x = ui->move_x->text().toDouble();
    double y = ui->move_x->text().toDouble();
    double z = ui->move_x->text().toDouble();

//    p_test = new Widget(this);
//    p_test->show();
}


void MainWindow::on_change_rot_clicked()
{
    double x = ui->move_x->text().toDouble();
    double y = ui->move_x->text().toDouble();
    double z = ui->move_x->text().toDouble();

}

