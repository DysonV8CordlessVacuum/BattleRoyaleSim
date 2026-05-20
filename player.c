#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "map.h"
#include "player.h"
#include "building.h"

// typedef struct{
//     int health;
//     int weapon;
//     int fear;
//     bool hostile;
//     int row,col;
// }Player;

void fight(Map*map, Player* p1, Player* p2){ 

    if(p1->health*p1->weapon > p2->health*p2->weapon) strcpy(map->matrix[p2->row][p2->col], "x");
    else strcpy(map->matrix[p1->row][p1->col], "x");
}


