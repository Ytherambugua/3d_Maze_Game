#include "renderer.h"
#include <math.h>

void drawWalls(SDL_Renderer* renderer, Player* player, int map[MAP_WIDTH][MAP_HEIGHT]) {
    // Implementation of raycasting to draw walls (similar to provided code in previous response)
}

void drawMiniMap(SDL_Renderer* renderer, int map[MAP_WIDTH][MAP_HEIGHT], Player* player) {
    int blockSize = 10; // Adjust size as needed
    for (int y = 0; y < MAP_HEIGHT; y++) {
        for (int x = 0; x < MAP_WIDTH; x++) {
            if (map[x][y] == 1) {
                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            } else {
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            }
            SDL_Rect block = { x * blockSize, y * blockSize, blockSize, blockSize };
            SDL_RenderFillRect(renderer, &block);
        }
    }

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_Rect playerRect = { player->x * blockSize - 2, player->y * blockSize - 2, 4, 4 };
    SDL_RenderFillRect(renderer, &playerRect);
}

