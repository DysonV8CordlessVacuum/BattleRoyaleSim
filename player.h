#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


#ifndef PLAYER_H
#define PLAYER_H

typedef struct{
    int health;
    int weapon;
    int fear;
    bool hostile;
    int row,col;
}Player;

#endif
