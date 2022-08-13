#include "widget.h"
#include "ui_widget.h"
#include "math.h"
#include <QMessageBox>
#include <QFileDialog>

Widget::Widget(QWidget *parent)
    : QOpenGLWidget(parent)
    , ui(new Ui::Widget)

{
        setWindowTitle("the visualaze_3d_object");
        setGeometry(0,0,1050,800);
        parcing_3d_files();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::initializeGL() {
   // glEnable(GL_DEPTH_TEST);
}

void Widget::resizeGL(int w, int h) {
    glViewport(0,0,w,h);
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();

            int min = -484;
            int max =  338;
               if (qFabs(min) > max) {
                       max = qFabs(min);
                   } else if (max > qFabs(min)) {
                       min = -max;
                   }
                   min*=1.2;
                   max*=1.2;
            glOrtho(min,max,min,max,min,max);
            glFrustum(min,max,min,max,min,max);

}


void Widget::paintGL() {


       glTranslatef(0,0,-4);

       vertex = (double *)calloc(some_data.count_of_vertex*3, sizeof(double));
       facets = (unsigned int *)calloc(some_data.count_of_polygons*10, sizeof(unsigned int));
       for (int i = 0, k = 0; i < some_data.matrix.rows; i++) {
           for (int j = 0; j < some_data.matrix.columns; j++, k++) {
               vertex[k] = some_data.matrix.matrix[i][j];
               if(k == 0)
               {
               min_x = vertex[k]; max_x = vertex[k];
               min_y = vertex[k]; max_y = vertex[k];
               min_z = vertex[k]; max_z = vertex[k];
               }
               else
               {
               if(k % 2 == 0) check_vertex_min_max(vertex[k], 2);
               else if(k % 3 == 0) check_vertex_min_max(vertex[k], 3);
               else check_vertex_min_max(vertex[k], 1);
               }
           }
       }
       for (int i = 0, k = 0;i < some_data.count_of_polygons ; i++) {
           for (int j = 0; j < some_data.polygons[i].numbers_of_vertexes_in_facets*2; j++, k++) {
                facets[k] = some_data.polygons[i].vertexes[j];
           }
       }
        glClearColor(0,0,0,0);
        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glRotatef(xRot, 1.0, 0.0, 0.0);
        glRotatef(yRot, 0.0, 1.0, 0.0);


        glTranslatef(0, 0, -4);
        glVertexPointer(3, GL_DOUBLE, 0, vertex);
        glPointSize(10);
        glColor3d(10,0,0);
        glEnableClientState(GL_VERTEX_ARRAY);
        glDrawArrays(GL_POINTS, 0, some_data.count_of_vertex);
        glColor4f(0.1, 0.75, 0.3, 1);
        glDrawElements(GL_POINTS, some_data.count_of_polygons * 6, GL_UNSIGNED_INT, facets);
        glDrawElements(GL_LINES, some_data.count_of_polygons * 6, GL_UNSIGNED_INT, facets);
//        glDisable(GL_POINT_SMOOTH);
//        glDisable(GL_LINE_STIPPLE);
        glDisableClientState(GL_VERTEX_ARRAY);
//        free(vertex);
//        free(facets);
}

void Widget::mousePressEvent(QMouseEvent* mo){
    mPos = mo->pos();
}
void Widget::mouseMoveEvent(QMouseEvent* mo){
    xRot= 1/M_PI*(mo->pos().y() - mPos.y());
    yRot= 1/M_PI*(mo->pos().x() - mPos.x());
    update();
}

int Widget::validation_of_files(char* name_file) {
    if(count_vertexes_polygons(name_file, &some_data)) { errors(3); return 1; }
    if(create_matrix_obj(name_file, &some_data)) { errors(4); return 1; }
    if(note_vertexes_polygons(name_file, &some_data)) { errors(5); return 1; }
    return 0;
}

void Widget::errors(int error) {
    switch (error) {
    case 1:
        QMessageBox::warning(this, "Внимание","File not open");
        break;
    case 2:
        QMessageBox::warning(this, "Внимание","File not exist");
        break;
    case 3:
        QMessageBox::warning(this, "Внимание","File doesnot parsed");
        break;
    case 4:
        QMessageBox::warning(this, "Внимание","File doesnot create_matrix_obj");
        break;
    case 5:
        QMessageBox::warning(this, "Внимание","File doesnot note_vertexes_polygons");
        break;
    default:
        break;
    }

}

void Widget:: parcing_3d_files()
{
    QString path_to_file = QFileDialog::getOpenFileName(NULL, "Open", "/Users/", "*.obj");
    QByteArray tmp = path_to_file.toLocal8Bit();
    char* name_of_file = tmp.data();

    if (!name_of_file) { errors(2); return; }
    if  (validation_of_files(name_of_file)) return;

//       glTranslatef(0,0,-4);

//       vertex = (double *)calloc(some_data.count_of_vertex*3, sizeof(double));
//       facets = (unsigned int *)calloc(some_data.count_of_polygons*10, sizeof(unsigned int));
//       for (int i = 0, k = 0; i < some_data.matrix.rows; i++) {
//           for (int j = 0; j < some_data.matrix.columns; j++, k++) {
//               vertex[k] = some_data.matrix.matrix[i][j];
//               if(k == 0)
//               {
//               min_x = vertex[k]; max_x = vertex[k];
//               min_y = vertex[k]; max_y = vertex[k];
//               min_z = vertex[k]; max_z = vertex[k];
//               }
//               else
//               {
//               if(k % 2 == 0) check_vertex_min_max(vertex[k], 2);
//               else if(k % 3 == 0) check_vertex_min_max(vertex[k], 3);
//               else check_vertex_min_max(vertex[k], 1);
//               }
//           }
//       }
//       for (int i = 0, k = 0;i < some_data.count_of_polygons ; i++) {
//           for (int j = 0; j < some_data.polygons[i].numbers_of_vertexes_in_facets*2; j++, k++) {
//                facets[k] = some_data.polygons[i].vertexes[j];
//           }
//       }
//       free(vertex);
//       free(facets);
}

void Widget:: check_vertex_min_max(double check, int choise) {

    switch (choise) {
    case 1:
               if (qFabs(min_x) > check) {
                       max_x = qFabs(check);
                   } else if (check > qFabs(min_x)) {
                       min_x = -check;
                   }
        break;
    case 2:
        if (qFabs(min_y) > check) {
                max_y = qFabs(check);
            } else if (check > qFabs(min_y)) {
                min_y = -check;
            }
        break;
    case 3:
        if (qFabs(min_z) > check) {
                max_y = qFabs(check);
            } else if (check > qFabs(min_z)) {
                min_z = -check;
            }
        break;
    }

}

void Widget::for_move(double x, double y, double z)
{
//    double x_1 = 1;
//    double y_1 = 1;
//    double z_1 = 1;
//    x_1 = x;
//    y_1 = y;
//    z_1 = z;
//    qDebug() << x;
//    qDebug() << y;
//    qDebug() << z;
    move_obj(&some_data, x, y, z);
//    for (int i = 0; i < some_data.count_of_vertex*3; i++) {
//    qDebug() << vertex[i];
//    }
    update();
}

void Widget::for_rot(double x, double y, double z)
{
    rotation_by_ox(&some_data, x);
    rotation_by_oy(&some_data, y);
    rotation_by_oz(&some_data, z);
    update();
}

void Widget::for_scale(double x)
{
    scale_obj(&some_data, x);
    update();
}
