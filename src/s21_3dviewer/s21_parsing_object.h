/*
 * @file s21_parsing_object.h
 * @authors cauliflb argentin aladales
 * @brief 3d viewer
 * @version 0.1
 * @date 2022-08-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _USERS_CAULIFLB_C8_3DVIEWER_MY_SRC_S21_PARSING_OBJECT_H_
#define _USERS_CAULIFLB_C8_3DVIEWER_MY_SRC_S21_PARSING_OBJECT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "s21_matrix.h" //in this point will started a dream

typedef struct facets {
    int *vertexes;
    int numbers_of_vertexes_in_facets;
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

#endif  // _USERS_CAULIFLB_C8_3DVIEWER_MY_SRC_S21_PARSING_OBJECT_H_
