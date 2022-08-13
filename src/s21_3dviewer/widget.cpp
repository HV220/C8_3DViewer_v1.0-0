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
}

void Widget::resizeGL(int w, int h) {
    glViewport(0,0,w,h);
         glMatrixMode(GL_PROJECTION);
         glLoadIdentity();
         double coef = 1.2;
         min_x*=coef;
         max_x*=coef;
         min_y*=coef;
         max_y*=coef;
         min_z*=coef;
         max_z*=coef;

         gluPerspective(60, (max_x-min_x)/(max_y-min_y), 1, 800);
}


void Widget::paintGL() {

        glClearColor(0,0,0,0);
        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glRotatef(xRot, 1.0, 0.0, 0);
        glRotatef(yRot, 0.0, 1.0, 0);
        glTranslatef(0,min_y,min_z);
        glVertexPointer(3, GL_DOUBLE, 0, vertex);
        glPointSize(10);
        glColor3d(10,0,0);
        glEnableClientState(GL_VERTEX_ARRAY);
        glDrawArrays(GL_POINTS, 0, some_data.count_of_vertex);
        glColor4f(0.1, 0.75, 0.3, 1);
        glDrawElements(GL_POINTS, some_data.count_of_polygons * 6, GL_UNSIGNED_INT, facets);
        glDrawElements(GL_LINES, some_data.count_of_polygons * 6, GL_UNSIGNED_INT, facets);
        glDisable(GL_POINT_SMOOTH);
        glDisable(GL_LINE_STIPPLE);
        glDisableClientState(GL_VERTEX_ARRAY);
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
        QMessageBox::warning(this, "Внимание","File doesnot changed");
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

       vertex = (double *)calloc(some_data.count_of_vertex*3, sizeof(double));
       facets = (unsigned int *)calloc(some_data.count_of_polygons*10, sizeof(unsigned int));
       for (int i = 0, k = 0; i < some_data.matrix.rows; i++) {
           for (int j = 0; j < some_data.matrix.columns; j++, k++) {
               vertex[k] = some_data.matrix.matrix[i][j];
               if(k == 0)
               {
               min_x = vertex[k]; max_x = vertex[k];
               }
               else if(k == 1)
               {
               min_y = vertex[k]; max_y = vertex[k];
               }
               else if(k == 2)
               {
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

}

void Widget:: check_vertex_min_max(double check, int choise) {

    switch (choise) {
    case 1:
        if(std::less<double>{}(max_x, check)) max_x = check;
        if(std::greater<double>{}(min_x, check)) min_x = check;
        break;
    case 2:
        if(std::less<double>{}(max_y, check)) max_y = check;
        if(std::greater<double>{}(min_y, check)) min_y = check;
        break;
    case 3:
        if(std::less<double>{}(max_z, check)) max_z = check;
        if(std::greater<double>{}(min_z, check)) min_z = check;
        break;
    }
}

