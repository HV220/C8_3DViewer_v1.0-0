#include "s21_parsing_object.h"

int main() {
    char path_of_file[500] = "/Users/cauliflb/C8_3DViewer/C8_3DViewer_v1.0-0/src/obj/Car.obj";
    data_t some_data;
    count_vertexes_polygons(path_of_file, &some_data);
    printf("There are %d vertexes and %d polygons\n", some_data.count_of_vertex,
           some_data.count_of_polygons);
    create_matrix_obj(path_of_file, &some_data);

    for (int i = 0; i < some_data.matrix.rows; i++) {
        for (int j = 0; j < some_data.matrix.columns; j++) {
            printf("%f\t", some_data.matrix.matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    note_vertexes_polygons(path_of_file, &some_data);
    for (int i = 0; i < some_data.count_of_polygons + 1; i++) {
        for (int j = 0; j < some_data.polygons[i].numbers_of_vertexes_in_facets * 2;
             j++) {
            printf("%d ", some_data.polygons[i].vertexes[j]);
        }
        printf("\n");
    }
    return 0;
}

