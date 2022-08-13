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

void rotation_by_ox(data_t *some_data, double angle) {
    for (int i = 0; i < some_data->matrix.rows; i++) {
        double temp_y = some_data->matrix.matrix[i][1];
        double temp_z = some_data->matrix.matrix[i][2];
        some_data->matrix.matrix[i][1] = temp_y * cos(angle) + temp_z * sin(angle);
        some_data->matrix.matrix[i][2] = (-1) * temp_y * sin(angle) + temp_z * cos(angle);
    }
}

void rotation_by_oy(data_t *some_data, double angle) {
    for (int i = 0; i < some_data->matrix.rows; i++) {
        double temp_x = some_data->matrix.matrix[i][0];
        double temp_z = some_data->matrix.matrix[i][2];
        some_data->matrix.matrix[i][1] = temp_x * cos(angle) + temp_z * sin(angle);
        some_data->matrix.matrix[i][2] = (-1) * temp_x * sin(angle) + temp_z * cos(angle);
    }
}

void rotation_by_oz(data_t *some_data, double angle) {
    for (int i = 0; i < some_data->matrix.rows; i++) {
        double temp_x = some_data->matrix.matrix[i][0];
        double temp_y = some_data->matrix.matrix[i][1];
        some_data->matrix.matrix[i][1] = temp_x * cos(angle) - temp_y * sin(angle);
        some_data->matrix.matrix[i][2] = (-1) * temp_x * sin(angle) + temp_y * cos(angle);
    }
}

void scale_obj(data_t *some_data, double scale) {
    s21_mult_number(some_data->matrix.matrix, scale, some_data->matrix.matrix);
}
