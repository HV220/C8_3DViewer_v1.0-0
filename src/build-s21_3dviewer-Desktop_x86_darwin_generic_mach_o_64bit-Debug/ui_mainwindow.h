/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QPushButton *perspective;
    QLabel *label;
    QPushButton *stipple_off;
    QPushButton *vertextype_square;
    QPushButton *background_white;
    QPushButton *stipple_on;
    QLabel *label_7;
    QLabel *label_4;
    QPushButton *vertextype_round;
    QLabel *label_8;
    QPushButton *pushButton_25;
    QPushButton *orthographic;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *download_obj;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *scale;
    QLineEdit *rot_x;
    QLineEdit *rot_y;
    QLineEdit *rot_z;
    QLineEdit *move_z;
    QLineEdit *move_x;
    QLineEdit *move_y;
    QPushButton *change_move;
    QPushButton *change_rot;
    QWidget *widget;
    QPushButton *change_scale;
    QLineEdit *back_color_1;
    QLineEdit *back_color_2;
    QLineEdit *back_color_3;
    QLineEdit *vertex_color_1;
    QLineEdit *vertex_color_2;
    QLineEdit *vertex_color_3;
    QPushButton *change_vertex_color;
    QLineEdit *edge_color_1;
    QPushButton *change_edge_color;
    QLineEdit *edge_color_2;
    QLineEdit *edge_color_3;
    QLineEdit *vertex_size;
    QPushButton *change_vertex_size;
    QPushButton *change_edge_size;
    QLineEdit *edge_size;
    QPushButton *vertextype_none;
    QPushButton *screenshot;
    QPushButton *start_image;
    QPushButton *stop_image;
    QLabel *label_of_inf;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1600, 997);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1600, 997));
        MainWindow->setMaximumSize(QSize(1600, 997));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1280, 210, 111, 31));
        perspective = new QPushButton(centralwidget);
        perspective->setObjectName(QString::fromUtf8("perspective"));
        perspective->setGeometry(QRect(1090, 750, 231, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1280, 60, 111, 31));
        stipple_off = new QPushButton(centralwidget);
        stipple_off->setObjectName(QString::fromUtf8("stipple_off"));
        stipple_off->setGeometry(QRect(1320, 790, 231, 51));
        vertextype_square = new QPushButton(centralwidget);
        vertextype_square->setObjectName(QString::fromUtf8("vertextype_square"));
        vertextype_square->setGeometry(QRect(1090, 240, 151, 51));
        background_white = new QPushButton(centralwidget);
        background_white->setObjectName(QString::fromUtf8("background_white"));
        background_white->setGeometry(QRect(1090, 450, 131, 51));
        stipple_on = new QPushButton(centralwidget);
        stipple_on->setObjectName(QString::fromUtf8("stipple_on"));
        stipple_on->setGeometry(QRect(1090, 790, 231, 51));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1350, 500, 71, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1280, 280, 111, 31));
        vertextype_round = new QPushButton(centralwidget);
        vertextype_round->setObjectName(QString::fromUtf8("vertextype_round"));
        vertextype_round->setGeometry(QRect(1240, 240, 141, 51));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1360, 670, 61, 31));
        pushButton_25 = new QPushButton(centralwidget);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        pushButton_25->setGeometry(QRect(1651, 1041, 131, 51));
        orthographic = new QPushButton(centralwidget);
        orthographic->setObjectName(QString::fromUtf8("orthographic"));
        orthographic->setGeometry(QRect(1320, 750, 231, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1280, 130, 111, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1280, 350, 111, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1340, 430, 111, 31));
        download_obj = new QPushButton(centralwidget);
        download_obj->setObjectName(QString::fromUtf8("download_obj"));
        download_obj->setGeometry(QRect(1260, 0, 131, 51));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1280, 530, 31, 16));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(1380, 530, 31, 16));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(1480, 530, 31, 16));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(1350, 580, 71, 31));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(1380, 610, 31, 16));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(1280, 610, 31, 16));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(1480, 610, 31, 16));
        scale = new QLineEdit(centralwidget);
        scale->setObjectName(QString::fromUtf8("scale"));
        scale->setGeometry(QRect(1330, 700, 111, 31));
        rot_x = new QLineEdit(centralwidget);
        rot_x->setObjectName(QString::fromUtf8("rot_x"));
        rot_x->setGeometry(QRect(1250, 550, 71, 31));
        rot_y = new QLineEdit(centralwidget);
        rot_y->setObjectName(QString::fromUtf8("rot_y"));
        rot_y->setGeometry(QRect(1350, 550, 71, 31));
        rot_z = new QLineEdit(centralwidget);
        rot_z->setObjectName(QString::fromUtf8("rot_z"));
        rot_z->setGeometry(QRect(1450, 550, 71, 31));
        move_z = new QLineEdit(centralwidget);
        move_z->setObjectName(QString::fromUtf8("move_z"));
        move_z->setGeometry(QRect(1450, 630, 71, 31));
        move_x = new QLineEdit(centralwidget);
        move_x->setObjectName(QString::fromUtf8("move_x"));
        move_x->setGeometry(QRect(1250, 630, 71, 31));
        move_y = new QLineEdit(centralwidget);
        move_y->setObjectName(QString::fromUtf8("move_y"));
        move_y->setGeometry(QRect(1350, 630, 71, 31));
        change_move = new QPushButton(centralwidget);
        change_move->setObjectName(QString::fromUtf8("change_move"));
        change_move->setGeometry(QRect(1090, 620, 131, 51));
        change_rot = new QPushButton(centralwidget);
        change_rot->setObjectName(QString::fromUtf8("change_rot"));
        change_rot->setGeometry(QRect(1090, 540, 131, 51));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1091, 831));
        change_scale = new QPushButton(centralwidget);
        change_scale->setObjectName(QString::fromUtf8("change_scale"));
        change_scale->setGeometry(QRect(1090, 680, 131, 51));
        back_color_1 = new QLineEdit(centralwidget);
        back_color_1->setObjectName(QString::fromUtf8("back_color_1"));
        back_color_1->setGeometry(QRect(1250, 460, 71, 31));
        back_color_2 = new QLineEdit(centralwidget);
        back_color_2->setObjectName(QString::fromUtf8("back_color_2"));
        back_color_2->setGeometry(QRect(1350, 460, 71, 31));
        back_color_3 = new QLineEdit(centralwidget);
        back_color_3->setObjectName(QString::fromUtf8("back_color_3"));
        back_color_3->setGeometry(QRect(1450, 460, 71, 31));
        vertex_color_1 = new QLineEdit(centralwidget);
        vertex_color_1->setObjectName(QString::fromUtf8("vertex_color_1"));
        vertex_color_1->setGeometry(QRect(1250, 90, 71, 31));
        vertex_color_2 = new QLineEdit(centralwidget);
        vertex_color_2->setObjectName(QString::fromUtf8("vertex_color_2"));
        vertex_color_2->setGeometry(QRect(1350, 90, 71, 31));
        vertex_color_3 = new QLineEdit(centralwidget);
        vertex_color_3->setObjectName(QString::fromUtf8("vertex_color_3"));
        vertex_color_3->setGeometry(QRect(1450, 90, 71, 31));
        change_vertex_color = new QPushButton(centralwidget);
        change_vertex_color->setObjectName(QString::fromUtf8("change_vertex_color"));
        change_vertex_color->setGeometry(QRect(1090, 80, 131, 51));
        edge_color_1 = new QLineEdit(centralwidget);
        edge_color_1->setObjectName(QString::fromUtf8("edge_color_1"));
        edge_color_1->setGeometry(QRect(1250, 320, 71, 31));
        change_edge_color = new QPushButton(centralwidget);
        change_edge_color->setObjectName(QString::fromUtf8("change_edge_color"));
        change_edge_color->setGeometry(QRect(1090, 310, 131, 51));
        edge_color_2 = new QLineEdit(centralwidget);
        edge_color_2->setObjectName(QString::fromUtf8("edge_color_2"));
        edge_color_2->setGeometry(QRect(1350, 320, 71, 31));
        edge_color_3 = new QLineEdit(centralwidget);
        edge_color_3->setObjectName(QString::fromUtf8("edge_color_3"));
        edge_color_3->setGeometry(QRect(1450, 320, 71, 31));
        vertex_size = new QLineEdit(centralwidget);
        vertex_size->setObjectName(QString::fromUtf8("vertex_size"));
        vertex_size->setGeometry(QRect(1250, 170, 71, 31));
        change_vertex_size = new QPushButton(centralwidget);
        change_vertex_size->setObjectName(QString::fromUtf8("change_vertex_size"));
        change_vertex_size->setGeometry(QRect(1090, 160, 131, 51));
        change_edge_size = new QPushButton(centralwidget);
        change_edge_size->setObjectName(QString::fromUtf8("change_edge_size"));
        change_edge_size->setGeometry(QRect(1090, 380, 131, 51));
        edge_size = new QLineEdit(centralwidget);
        edge_size->setObjectName(QString::fromUtf8("edge_size"));
        edge_size->setGeometry(QRect(1250, 390, 71, 31));
        vertextype_none = new QPushButton(centralwidget);
        vertextype_none->setObjectName(QString::fromUtf8("vertextype_none"));
        vertextype_none->setGeometry(QRect(1380, 240, 141, 51));
        screenshot = new QPushButton(centralwidget);
        screenshot->setObjectName(QString::fromUtf8("screenshot"));
        screenshot->setGeometry(QRect(1090, 880, 131, 51));
        start_image = new QPushButton(centralwidget);
        start_image->setObjectName(QString::fromUtf8("start_image"));
        start_image->setGeometry(QRect(1260, 880, 131, 51));
        stop_image = new QPushButton(centralwidget);
        stop_image->setObjectName(QString::fromUtf8("stop_image"));
        stop_image->setGeometry(QRect(1420, 880, 131, 51));
        label_of_inf = new QLabel(centralwidget);
        label_of_inf->setObjectName(QString::fromUtf8("label_of_inf"));
        label_of_inf->setGeometry(QRect(0, 870, 1041, 81));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1600, 24));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "--VertexType--", nullptr));
        perspective->setText(QCoreApplication::translate("MainWindow", "Perspective", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "--VertexColor--", nullptr));
        stipple_off->setText(QCoreApplication::translate("MainWindow", "Stipple OFF", nullptr));
        vertextype_square->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        background_white->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        stipple_on->setText(QCoreApplication::translate("MainWindow", "Stipple ON", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "--Rotation--", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "--EdgeColor--", nullptr));
        vertextype_round->setText(QCoreApplication::translate("MainWindow", "Round", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "-Scale-", nullptr));
        pushButton_25->setText(QCoreApplication::translate("MainWindow", "Screenshot", nullptr));
        orthographic->setText(QCoreApplication::translate("MainWindow", "Orthographic", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "--VertexSize--", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "--EdgeSize--", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "--Background--", nullptr));
        download_obj->setText(QCoreApplication::translate("MainWindow", "Open .obj", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "--Moving--", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        change_move->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        change_rot->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        change_scale->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        change_vertex_color->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        change_edge_color->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        change_vertex_size->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        change_edge_size->setText(QCoreApplication::translate("MainWindow", "Change", nullptr));
        vertextype_none->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        screenshot->setText(QCoreApplication::translate("MainWindow", "Screenshot", nullptr));
        start_image->setText(QCoreApplication::translate("MainWindow", "Start Image", nullptr));
        stop_image->setText(QCoreApplication::translate("MainWindow", "Stop Image", nullptr));
        label_of_inf->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
