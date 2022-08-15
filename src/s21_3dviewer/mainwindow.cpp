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
    create_screen();
    qDebug()<<flag;
}





void MainWindow::on_change_move_clicked()
{
    double x = ui->move_x->text().toDouble();
    double y = ui->move_y->text().toDouble();
    double z = ui->move_z->text().toDouble();
    p_test->for_move(x,y,z);
    p_test->update();
    create_screen();
}


void MainWindow::on_change_rot_clicked()
{
    double x = ui->rot_x->text().toDouble();
    double y = ui->rot_y->text().toDouble();
    double z = ui->rot_z->text().toDouble();
    p_test->for_rot(x, y, z);
    p_test->update();
    create_screen();
}


void MainWindow::on_change_scale_clicked()
{
    double x = ui->scale->text().toDouble();
    p_test->for_scale(x);
    p_test->update();
    create_screen();
}


void MainWindow::on_background_white_clicked()
{
    p_test->r1 = ui->back_color_1->text().toDouble();
    p_test->g1 = ui->back_color_2->text().toDouble();
    p_test->b1 = ui->back_color_3->text().toDouble();
    p_test->change_background_color(p_test->r1, p_test->g1, p_test->b1);
    p_test->update();
    create_screen();
}


void MainWindow::on_change_vertex_color_clicked()
{
    p_test->r = ui->vertex_color_1->text().toDouble();
    p_test->g = ui->vertex_color_2->text().toDouble();
    p_test->b = ui->vertex_color_3->text().toDouble();
    p_test->change_vertex_color(p_test->r, p_test->g, p_test->b);
    p_test->update();
    create_screen();
}

void MainWindow::on_change_vertex_size_clicked()
{
    p_test->width = ui->vertex_size->text().toDouble();
    p_test->change_vertex_size(p_test->width);
    p_test->update();
    create_screen();
}

void MainWindow::on_change_edge_color_clicked()
{
    p_test->r2 = ui->edge_color_1->text().toDouble();
    p_test->g2 = ui->edge_color_2->text().toDouble();
    p_test->b2 = ui->edge_color_3->text().toDouble();
    p_test->change_edge_color(p_test->r2, p_test->g2, p_test->b2);
    p_test->update();
    create_screen();
}

void MainWindow::on_change_edge_size_clicked()
{
    p_test->width_edge = ui->vertex_size->text().toDouble();
    p_test->change_edge_size(p_test->width_edge);
    p_test->update();
    create_screen();
}

void MainWindow::on_stipple_on_clicked()
{
    p_test->line_type = 1;
    p_test->change_line_type_1(p_test->line_type);
    p_test->update();
    create_screen();
}

void MainWindow::on_stipple_off_clicked()
{
    p_test->line_type = 0;
    p_test->change_line_type_2(p_test->line_type);
    p_test->update();
    create_screen();
}

void MainWindow::on_vertextype_round_clicked()
{
    p_test->type_point = 2;
    p_test->change_vertex_type(p_test->type_point);
    p_test->update();
    create_screen();
}

void MainWindow::on_vertextype_square_clicked()
{
    p_test->type_point = 3;
    p_test->change_vertex_type(p_test->type_point);
    p_test->update();
    create_screen();
}

void MainWindow::on_vertextype_none_clicked()
{
    p_test->type_point = 1;
    p_test->change_vertex_type(p_test->type_point);
    p_test->update();
    create_screen();
}

void MainWindow::on_screenshot_clicked()
{
    QString file = QFileDialog::getSaveFileName(this, "Save as...", "name", "BMP (*.bmp);; JPEG (*.jpeg)");
    p_test->grab().save(file);
    qDebug()<<flag;
}

void MainWindow::create_screen()
{
    if (flag == 1) {
        mas_image.push_back(p_test->grab().toImage());
    }
}

// void MainWindow::on_label_with_inf_linkActivated(const QString &link)
//{
//    QString qs = QString::fromLocal8Bit(link.c_str());
//    int vertex_inf = p_test->some_data.count_of_vertex;
//    int polygon_inf = p_test->some_data.count_of_polygons;
//    QString str_vertex =  QString::number(vertex_inf, 'g', 15);
//    QString str_polygons =  QString::number(polygon_inf, 'g', 15);
//    ui->label_of_inf->setText(p_test->path_to_file + "\nКоличество вершин: " + str_vertex + "\nКоличество полигонов: " + str_polygons);
//}


void MainWindow::on_start_image_clicked()
{
    flag = 1;
}


void MainWindow::on_stop_image_clicked()
{
        flag = 0;
            QString fileName = QFileDialog::getSaveFileName(this, tr("Save screenshot"), "", tr("GIF screenshot (*.gif);;GIF screenshot (*.gif)"));
            QGifImage gif(QSize(5000, 5000));
            QVector<QRgb> ctable;
            ctable << qRgb(255, 255, 255)
                   << qRgb(0, 0, 0)
                   << qRgb(255, 0, 0)
                   << qRgb(0, 255, 0)
                   << qRgb(0, 0, 255)
                   << qRgb(255, 255, 0)
                   << qRgb(0, 255, 255)
                   << qRgb(255, 0, 255);

            gif.setGlobalColorTable(ctable, Qt::black);
            gif.setDefaultTransparentColor(Qt::black);
            gif.setDefaultDelay(100);

            for (QVector<QImage>::Iterator img = mas_image.begin(); img != mas_image.end(); ++img) {
                gif.addFrame(*img);
            }
            gif.save(fileName);
}


