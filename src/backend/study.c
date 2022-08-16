#include "s21_parsing_object.h"
#include <stdio.h>
#include "matrix_lib/s21_matrix.h"
int main() {
      data_t some_data;
       s21_create_matrix(3, 3, &some_data.matrix);
          some_data.matrix.matrix[0][0] = 1;
          some_data.matrix.matrix[0][1] = 0;
          some_data.matrix.matrix[0][2] = 1;
          some_data.matrix.matrix[1][0] = 1;
          some_data.matrix.matrix[1][1] = 1;
          some_data.matrix.matrix[1][2] = 1;
          some_data.matrix.matrix[2][0] = 1;
          some_data.matrix.matrix[2][1] = 1;
          some_data.matrix.matrix[2][2] = 1;
    double a = 0, b = 0;
    get_max_min_frustum(&a, &b, some_data);
    // ck_assert_double_eq(a, 1);
    // ck_assert_double_eq(b, 0);
    // for (int i = 0; i < some_data.matrix.rows; i++) {
    //     printf("%f\n", some_data.matrix.matrix[i][0]);
    //     printf("%f\n", some_data.matrix.matrix[i][1]);
    //     printf("%f\n", some_data.matrix.matrix[i][2]);
    // }
    printf("%f\n", a);
    printf("%f\n", b);
  return 0;
}
