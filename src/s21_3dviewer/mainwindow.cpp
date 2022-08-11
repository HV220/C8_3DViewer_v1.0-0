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


void MainWindow::on_edgecol_red_clicked()
{
    //p_test = new Widget(this);
    p_test->change_color();
}

