#include "player.h"
#include "map.h"
#include <math.h>
#include <SDL2/SDL.h>

void initPlayer(Player* player) {
    player->x = 22.0;
    player->y = 12.0;
    player->dirX = -1.0;
    player->dirY = 0.0;
}

void handleKeydown(SDL_Keycode key, Player* player, int map[MAP_WIDTH][MAP_HEIGHT]) {
    double moveSpeed = 0.1;
    double rotSpeed = 0.1;

    switch (key) {
        case SDLK_UP:
            if (map[(int)(player->x + player->dirX * moveSpeed)][(int)player->y] == 0) player->x += player->dirX * moveSpeed;
            if (map[(int)player->x][(int)(player->y + player->dirY * moveSpeed)] == 0) player->y += player->dirY * moveSpeed;
            break;
        case SDLK_DOWN:
            if (map[(int)(player->x - player->dirX * moveSpeed)][(int)player->y] == 0) player->x -= player->dirX * moveSpeed;
            if (map[(int)player->x][(int)(player->y - player->dirY * moveSpeed)] == 0) player->y -= player->dirY * moveSpeed;
            break;
        case SDLK_LEFT:
            {
                double oldDirX = player->dirX;
                player->dirX = player->dirX * cos(rotSpeed) - player->dirY * sin(rotSpeed);
                player->dirY = oldDirX * sin(rotSpeed) + player->dirY * cos(rotSpeed);
            }
            break;
        case SDLK_RIGHT:
            {
                double oldDirX = player->dirX;
                player->dirX = player->dirX * cos(-rotSpeed) - player->dirY * sin(-rotSpeed);
                player->dirY = oldDirX * sin(-rotSpeed) + player->dirY * cos(-rotSpeed);
            }
            break;
    }
}

