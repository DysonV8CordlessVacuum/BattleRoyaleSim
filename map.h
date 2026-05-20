#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


#ifndef MAP_H
#define MAP_H

typedef struct {
    char matrix[200][200][4];
    bool isForbidden[200][200];
}Map;
void dysplay(Map* map);
void init();
#endif
