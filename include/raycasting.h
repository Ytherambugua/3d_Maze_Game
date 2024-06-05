#ifndef RAYCASTING_H
#define RAYCASTING_H

#include <SDL2/SDL.h>
#include "player.h"
#include "map.h"

typedef struct {
    double cameraX;  // x-coordinate on the camera plane
    double rayDirX;  // direction of the ray in x
    double rayDirY;  // direction of the ray in y
    int mapX;        // current square of the map the ray is in
    int mapY;        // current square of the map the ray is in
    double sideDistX;  // length of ray from current position to next x-side
    double sideDistY;  // length of ray from current position to next y-side
    double deltaDistX; // length of ray from one x-side to the next x-side
    double deltaDistY; // length of ray from one y-side to the next y-side
    double perpWallDist; // perpendicular distance to the wall
    int stepX;       // direction to go in x (+1 or -1)
    int stepY;       // direction to go in y (+1 or -1)
    int hit;         // was a wall hit?
    int side;        // was the wall vertical or horizontal?
} Ray;

void performRaycasting(SDL_Renderer* renderer, Player* player, int map[MAP_WIDTH][MAP_HEIGHT]);

#endif

