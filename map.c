#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "map.h"
#include "player.h"
#include "building.h"

void dysplay(Map* map)
{
    for(int i = 0 ; i < 200; i ++)
    {
        for(int j = 0 ; j < 200; j++)
        {
            printf("%c%s", map->matrix[i][j]," ");  
        }
        printf("\n");
    }
}
    
void addBuilding(Map* map, Building* building, int row, int col )
{
    for(int r = 0 ; r < 20; r ++)
        for(int c = 0 ; c < 20; c++)
            map->matrix[r + row][c + col] = building->art[r][c];
}

void setForbidden(Map* map, int row, int col)
{
    for(int r = 0 ; r < 20; r ++)
        for(int c = 0 ; c < 20; c++)
            map->isForbidden[r + row][c + col] = true;
}

void init();
{

    //  Building lightHouse ={ {{" "," "," "," "," "," "," "," "," ","◼"," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," ","◼"," ","◼"," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "},
    //                         {" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "}}}
    //   lighthouse, touristAssociation, 
    // tangerineTrees, clinic, harbor, residentialArea, 
    // hill, southernMountain, houseWithWell, smallShintoShrine,
    // exposedRock, school, farmCoop, houseWithConcreteWall,
    // farmHouse, northernMountain;
    //Full Square Block: █ 
    //[1]White/Empty Square: □
    //Black/Filled Square: ■ 
    //Medium Black Square: ◼
    //Medium White Square: ◻ S
    //Small Black Square: ▪ 
    //Small White Square: ▫ 
    //Lower Half Block: ▄
    //Upper Half Block: ▀
    //Left Half Block:    ▌
    //Right Half Bolock : ▐
    //Light Shade: ░ 
    //(25% filled)Medium Shade: ▒ 
    //(50% filled)Dark Shade: ▓ (75% filled) 
    //Full block : █
    char array[] = {'◼'};
    return;

}
