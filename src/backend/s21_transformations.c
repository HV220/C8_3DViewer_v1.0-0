#include "s21_parsing_object.h"
/**
 * @brief движение по оси x, где 0 отвечает
 * за изменение данных из столбца по X
 */
void move_obj(data_t *some_data, double x, double y, double z) {
    for (int i = 0; i < some_data->matrix.rows; i++) {
        some_data->matrix.matrix[i][0] += x;
        some_data->matrix.matrix[i][1] += y;
        some_data->matrix.matrix[i][2] += z;
    }
}

void rotation_by_ox(data_t *some_data, double corner) {
    matrix_t tmp;
    tmp  = (*some_data).matrix;
    matrix_t turn_matrix;
    s21_create_matrix(3, 3, &turn_matrix);
    turn_matrix.matrix[0][0] = 1;
    turn_matrix.matrix[0][1] = 0;
    turn_matrix.matrix[0][2] = 0;
    turn_matrix.matrix[1][0] = 0;
    turn_matrix.matrix[1][1] = cos(corner);
    turn_matrix.matrix[1][2] = sin(corner);
    turn_matrix.matrix[2][0] = 0;
    turn_matrix.matrix[2][1] = -sin(corner);
    turn_matrix.matrix[2][2] = cos(corner);
    matrix_t result;
    s21_mult_matrix(&tmp, &turn_matrix, &result);
    (*some_data).matrix = result;
    s21_remove_matrix(&turn_matrix);
}

void rotation_by_oy(data_t *some_data, double corner) {
    matrix_t tmp;
    tmp  = (*some_data).matrix;
    matrix_t turn_matrix;
    s21_create_matrix(3, 3, &turn_matrix);
    turn_matrix.matrix[0][0] = cos(corner);
    turn_matrix.matrix[0][1] = 0;
    turn_matrix.matrix[0][2] = -sin(corner);;
    turn_matrix.matrix[1][0] = 0;
    turn_matrix.matrix[1][1] = 1;
    turn_matrix.matrix[1][2] = 0;
    turn_matrix.matrix[2][0] = sin(corner);
    turn_matrix.matrix[2][1] = 0;
    turn_matrix.matrix[2][2] = cos(corner);
    matrix_t result;
    s21_mult_matrix(&tmp, &turn_matrix, &result);
    (*some_data).matrix = result;
    s21_remove_matrix(&turn_matrix);
}
void rotation_by_oz(data_t *some_data, double corner) {
    matrix_t tmp;
    tmp  = (*some_data).matrix;
    matrix_t turn_matrix;
    s21_create_matrix(3, 3, &turn_matrix);
    turn_matrix.matrix[0][0] = cos(corner);
    turn_matrix.matrix[0][1] = sin(corner);
    turn_matrix.matrix[0][2] = 0;
    turn_matrix.matrix[1][0] = -sin(corner);
    turn_matrix.matrix[1][1] = cos(corner);
    turn_matrix.matrix[1][2] = 0;
    turn_matrix.matrix[2][0] = 0;
    turn_matrix.matrix[2][1] = 0;
    turn_matrix.matrix[2][2] = 1;
    matrix_t result;
    s21_mult_matrix(&tmp, &turn_matrix, &result);
    (*some_data).matrix = result;
    s21_remove_matrix(&turn_matrix);
}
void scale_obj(data_t *some_data, double scale) {
    s21_mult_number(some_data->matrix.matrix, scale, some_data->matrix.matrix);
}
