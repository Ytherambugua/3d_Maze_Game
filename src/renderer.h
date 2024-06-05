#ifndef RENDERER_H
#define RENDERER_H

#include <SDL2/SDL.h>
#include "player.h"
#include "map.h"

void drawWalls(SDL_Renderer* renderer, Player* player, int map[MAP_WIDTH][MAP_HEIGHT]);
void drawMiniMap(SDL_Renderer* renderer, int map[MAP_WIDTH][MAP_HEIGHT], Player* player);

#endif

