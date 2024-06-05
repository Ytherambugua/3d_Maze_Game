#ifndef PLAYER_H
#define PLAYER_H

typedef struct {
    double x, y;
    double dirX, dirY;
} Player;

void initPlayer(Player* player);
void handleKeydown(SDL_Keycode key, Player* player, int map[MAP_WIDTH][MAP_HEIGHT]);

#endif

