#include "map.h"
#include <stdio.h>
#include <stdlib.h>

void loadMap(const char* filename, int map[MAP_WIDTH][MAP_HEIGHT]) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        printf("Failed to open map file\n");
        exit(1);
    }

    for (int y = 0; y < MAP_HEIGHT; y++) {
        for (int x = 0; x < MAP_WIDTH; x++) {
            fscanf(file, "%d", &map[x][y]);
        }
    }

    fclose(file);
}

