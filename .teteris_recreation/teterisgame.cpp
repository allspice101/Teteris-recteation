#include <iostream>
#include <fsream>
#include <conio.h>
using namespace std;
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#include <stdint>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
int tilefall;
#define lTile("tile.l")
#define lTilereverse("tile.lr")
#define squigleTile("tile.squigle")
#define squigleTilereverse("tile.squigler")
#define tTile("tile.t")
#define lineTile("tile.line")
int main() {
	int width, height, bpp;
	uint8_t* rgb_image = stbi_load("tile_l.png", &width, &height, &bpp, 3);
	uint8_t* rgb_image = stbi_load("tile_l_reverse.png", &width, &height, &bpp, 3);
	uint8_t* rgb_image = stbi_load("tile_line.png", &width, &height, &bpp, 3);
	uint8_t* rgb_image = stbi_load("tile_square.png", &width, &height, &bpp, 3);
	uint8_t* rgb_image = stbi_load("tile_squiggle.png", &width, &height, &bpp, 3);
	uint8_t* rgb_image = stbi_load("tile_squiggle_reverse.png", &width, &height, &bpp, 3);
	uint8_t* rgb_image = stbi_load("tile_t.png", &width, &height, &bpp, 3);
	uint8_t* rgb_image = stbi_load("menu_cursor.gif", &width, &height, &bpp, 3);
	stbi_image_free(rgb_image);
	return 0;
	ofstream pref;
	ofstream save;
	ofstream game;
	pref.open("prefrences.cpp");
	save.open("save.cpp");
	game.open("runtime.cpp")
	//Im ending this prodject becausei dont have the motivaton to continue it.
}