CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = src/main.c src/player.c src/renderer.c src/map.c
OBJ = $(SRC:.c=.o)
INCLUDE = -I include
LIBS = -lSDL2

all: 3d-maze-game

3d-maze-game: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@ $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

clean:
	rm -f $(OBJ) 3d-maze-game

.PHONY: all clean

