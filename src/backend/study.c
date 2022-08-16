#include "s21_parsing_object.h"
#include <stdio.h>
#include "matrix_lib/s21_matrix.h"
int main() {
    data_t some_data;
    //for (int i = 0; i < 2; i++) {
        some_data.matrix.matrix[0][0] = 1;
        some_data.matrix.matrix[0][1] = 1;
        some_data.matrix.matrix[0][2] = 1;
    //}
    rotation_by_ox(&some_data, 30);
    //for (int i = 0; i < 2; i++) {
        printf("%f\n", some_data.matrix.matrix[0][0]);
        printf("%f\n", some_data.matrix.matrix[0][1]);
        printf("%f\n", some_data.matrix.matrix[0][2]);
    //}
  return 0;
}
