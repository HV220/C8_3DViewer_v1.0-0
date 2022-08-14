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


void MainWindow::on_background_white_clicked()
{
    p_test->r1 = ui->back_color_1->text().toDouble();
    p_test->g1 = ui->back_color_2->text().toDouble();
    p_test->b1 = ui->back_color_3->text().toDouble();
    p_test->change_background_color(p_test->r1, p_test->g1, p_test->b1);
    ui->widget->update();
}


void MainWindow::on_change_vertex_color_clicked()
{
    p_test->r = ui->vertex_color_1->text().toDouble();
    p_test->g = ui->vertex_color_2->text().toDouble();
    p_test->b = ui->vertex_color_3->text().toDouble();
    p_test->change_vertex_color(p_test->r, p_test->g, p_test->b);
    ui->widget->update();
}

void MainWindow::on_change_vertex_size_clicked()
{
    p_test->width = ui->vertex_size->text().toDouble();
    p_test->change_vertex_size(p_test->width);
    ui->widget->update();
}

void MainWindow::on_change_edge_color_clicked()
{
    p_test->r2 = ui->edge_color_1->text().toDouble();
    p_test->g2 = ui->edge_color_2->text().toDouble();
    p_test->b2 = ui->edge_color_3->text().toDouble();
    p_test->change_edge_color(p_test->r2, p_test->g2, p_test->b2);
    ui->widget->update();
}

void MainWindow::on_change_edge_size_clicked()
{
    p_test->width_edge = ui->vertex_size->text().toDouble();
    p_test->change_edge_size(p_test->width_edge);
    ui->widget->update();
}


void MainWindow::on_stipple_on_clicked()
{
    p_test->line_type = 1;
    p_test->change_line_type_1(p_test->line_type);
    ui->widget->update();
}


void MainWindow::on_stipple_off_clicked()
{
    p_test->line_type = 0;
    p_test->change_line_type_2(p_test->line_type);
    ui->widget->update();
}


void MainWindow::on_vertextype_round_clicked()
{
    p_test->type_point = 2;
    p_test->change_vertex_type(p_test->type_point);
    //ui->widget->update();
}


void MainWindow::on_vertextype_square_clicked()
{
    p_test->type_point = 3;
    p_test->change_vertex_type(p_test->type_point);
    //ui->widget->update();
}



void MainWindow::on_vertextype_none_clicked()
{
    p_test->type_point = 1;
    p_test->change_vertex_type(p_test->type_point);
    //ui->widget->update();
}

