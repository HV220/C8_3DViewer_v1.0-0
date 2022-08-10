/**
 * @file s21_parsing_object.h
 * @authors cauliflb luigiket aladales
 * @brief 3d viewer
 * @version 0.1
 * @date 2022-08-05
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef SRC_S21_PARSING_OBJECT_H_
#define SRC_S21_PARSING_OBJECT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./matrix_functions/s21_matrix.h"

typedef struct facets {
    int *vertexes;
    unsigned int numbers_of_vertexes_in_facets;
} polygon_t;

typedef struct data {
    int count_of_vertex;
    int count_of_polygons;
    matrix_t matrix;
    polygon_t *polygons;
} data_t;

/* functions for parsing .obj*/
int count_vertexes_polygons(char *path_of_file, data_t *some_data);
int create_matrix_obj(char *path_of_file, data_t *some_data);
int note_vertexes_polygons(char *path_of_file, data_t *some_data);

/* functions for transforming object */
void move_x(data_t *some_data, double a);
void move_y(data_t *some_data, double a);
void move_z(data_t *some_data, double a);
void rotation_by_ox(data_t *some_data, double angle);
void rotation_by_oy(data_t *some_data, double angle);
void rotation_by_oz(data_t *some_data, double angle);

#endif  // SRC_S21_PARSING_OBJECT_H_
