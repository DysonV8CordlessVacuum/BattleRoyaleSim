#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "map.h"
#include "player.h"
#include "building.h"

void display(Map* map)
{
    for(int i = 0 ; i < 200; i ++)
    {
        for(int j = 0 ; j < 200; j++)
        {
            printf("%s ", map->matrix[i][j]);  
        }
        printf("\n");
    }
}
    
void addBuilding(Map* map, Building* building, int row, int col )
{
    for(int r = 0 ; r < 20; r ++)
        for(int c = 0 ; c < 20; c++)
            strcpy(map->matrix[r+row][c+col], building->art[r][c]);
}

void setForbidden(Map* map, int row, int col)
{
    for(int r = 0 ; r < 20; r ++)
        for(int c = 0 ; c < 20; c++)
            map->isForbidden[r + row][c + col] = true;
}

void init(Map* map)
{


}
