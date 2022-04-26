#include "character.h"
#include "prop.h"

int main(void)
{
	const int 	window_width{1200};
	const int 	window_height{800};
	InitWindow(window_width, window_height, "RPG Cybersquare");

	Texture2D	map_01 = LoadTexture("./tiles_city/town_01.png");
	Texture2D   map_01_top = LoadTexture("./tiles_city/town_01_top_player.png");
	Vector2		map_pos{0.0f, 0.0f};
	const float	map_scale{1.75f};
	const float	colision_tile{56};

	Character	sword_man{window_width, window_height};

	Prop props[332]{
		// House Left/Up
		//Prop{Vector2{colision_tile * 1.0f, colision_tile * 2.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 1.0f, colision_tile * 3.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 1.0f, colision_tile * 7.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 1.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 2.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 3.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 4.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 5.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 6.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 7.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 3.0f, colision_tile * 2.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 3.0f, colision_tile * 1.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 3.0f, colision_tile * 0.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 3.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 4.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 5.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 5.0f, colision_tile * 10.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 6.0f, colision_tile * 11.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 7.0f, colision_tile * 10.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 8.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 9.0f, colision_tile * 10.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 10.0f, colision_tile * 10.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 10.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 10.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 10.0f, colision_tile * 11.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 11.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 12.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 13.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 13.0f, colision_tile * 1.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 13.0f, colision_tile * 0.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 7.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 6.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 5.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 4.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 3.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 2.0f}, LoadTexture("test_collision.png")},

		// House Center_Up
		Prop{Vector2{colision_tile * 16.0f, colision_tile * 2.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 16.0f, colision_tile * 3.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 16.0f, colision_tile * 4.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 16.0f, colision_tile * 5.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 16.0f, colision_tile * 6.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 16.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 16.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 17.0f, colision_tile * 0.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 17.0f, colision_tile * 1.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 17.0f, colision_tile * 7.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 17.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 18.0f, colision_tile * 10.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 19.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 20.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 21.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 21.0f, colision_tile * 11.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 21.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 22.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 23.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 24.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 25.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 25.0f, colision_tile * 3.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 25.0f, colision_tile * 2.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 25.0f, colision_tile * 1.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 25.0f, colision_tile * 0.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 26.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 26.0f, colision_tile * 7.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 26.0f, colision_tile * 6.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 26.0f, colision_tile * 5.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 26.0f, colision_tile * 4.0f}, LoadTexture("test_collision.png")},

		// Gear
		Prop{Vector2{colision_tile * 26.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 26.0f, colision_tile * 10.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 10.0f}, LoadTexture("test_collision.png")},

		// Entrepot
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 11.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 0.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 1.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 28.0f, colision_tile * 2.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 28.0f, colision_tile * 3.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 28.0f, colision_tile * 4.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 28.0f, colision_tile * 5.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 28.0f, colision_tile * 6.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 28.0f, colision_tile * 7.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 28.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 28.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 29.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 30.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 31.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 32.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 33.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 34.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 35.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 35.0f, colision_tile * 10.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 36.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 37.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 38.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 38.0f, colision_tile * 10.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 39.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 40.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 41.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 42.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 43.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 44.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 45.0f, colision_tile * 9.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 46.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 46.0f, colision_tile * 11.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 47.0f, colision_tile * 8.0f}, LoadTexture("test_collision.png")},

		// House Left/Center
		Prop{Vector2{colision_tile * 1.0f, colision_tile * 22.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 1.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 1.0f, colision_tile * 19.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 21.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 17.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 20.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 24.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 26.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 3.0f, colision_tile * 24.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 3.0f, colision_tile * 20.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 4.0f, colision_tile * 20.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 4.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 5.0f, colision_tile * 24.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 5.0f, colision_tile * 20.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 6.0f, colision_tile * 25.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 6.0f, colision_tile * 26.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 6.0f, colision_tile * 19.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 6.0f, colision_tile * 18.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 7.0f, colision_tile * 18.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 7.0f, colision_tile * 24.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 8.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 8.0f, colision_tile * 18.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 9.0f, colision_tile * 24.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 9.0f, colision_tile * 18.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 10.0f, colision_tile * 25.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 10.0f, colision_tile * 18.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 10.0f, colision_tile * 19.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 11.0f, colision_tile * 20.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 11.0f, colision_tile * 24.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 12.0f, colision_tile * 20.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 12.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 13.0f, colision_tile * 20.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 13.0f, colision_tile * 24.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 20.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 21.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 22.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 24.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 26.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 15.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 15.0f, colision_tile * 17.0f}, LoadTexture("test_collision.png")},

		// Center House
		Prop{Vector2{colision_tile * 18.0f, colision_tile * 17.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 19.0f, colision_tile * 19.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 19.0f, colision_tile * 27.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 20.0f, colision_tile * 22.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 20.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 20.0f, colision_tile * 24.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 20.0f, colision_tile * 25.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 20.0f, colision_tile * 26.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 21.0f, colision_tile * 22.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 21.0f, colision_tile * 26.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 22.0f, colision_tile * 22.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 22.0f, colision_tile * 26.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 23.0f, colision_tile * 22.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 23.0f, colision_tile * 27.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 24.0f, colision_tile * 22.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 24.0f, colision_tile * 26.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 25.0f, colision_tile * 22.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 25.0f, colision_tile * 25.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 26.0f, colision_tile * 26.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 26.0f, colision_tile * 22.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 26.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 24.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 25.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 26.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 22.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 28.0f, colision_tile * 24.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 29.0f, colision_tile * 17.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 29.0f, colision_tile * 27.0f}, LoadTexture("test_collision.png")},

		// House Right/Center
		Prop{Vector2{colision_tile * 34.0f, colision_tile * 17.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 34.0f, colision_tile * 27.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 35.0f, colision_tile * 17.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 35.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 36.0f, colision_tile * 26.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 36.0f, colision_tile * 25.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 36.0f, colision_tile * 24.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 36.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 37.0f, colision_tile * 30.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 37.0f, colision_tile * 29.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 37.0f, colision_tile * 28.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 37.0f, colision_tile * 27.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 37.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 38.0f, colision_tile * 29.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 38.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 39.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 39.0f, colision_tile * 29.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 40.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 40.0f, colision_tile * 30.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 41.0f, colision_tile * 29.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 41.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 42.0f, colision_tile * 22.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 42.0f, colision_tile * 27.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 42.0f, colision_tile * 28.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 42.0f, colision_tile * 29.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 43.0f, colision_tile * 19.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 43.0f, colision_tile * 22.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 43.0f, colision_tile * 23.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 43.0f, colision_tile * 26.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 43.0f, colision_tile * 24.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 44.0f, colision_tile * 27.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 44.0f, colision_tile * 25.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 44.0f, colision_tile * 26.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 45.0f, colision_tile * 29.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 45.0f, colision_tile * 17.0f}, LoadTexture("test_collision.png")},

		// House Right/down
		Prop{Vector2{colision_tile * 9.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 10.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 11.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 15.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 17.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 21.0f, colision_tile * 42.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 22.0f, colision_tile * 41.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 22.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 22.0f, colision_tile * 37.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 22.0f, colision_tile * 38.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 22.0f, colision_tile * 39.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 22.0f, colision_tile * 40.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 22.0f, colision_tile * 41.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 22.0f, colision_tile * 35.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 23.0f, colision_tile * 41.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 23.0f, colision_tile * 35.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 24.0f, colision_tile * 40.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 24.0f, colision_tile * 35.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 25.0f, colision_tile * 35.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 25.0f, colision_tile * 41.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 26.0f, colision_tile * 42.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 26.0f, colision_tile * 35.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 41.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 35.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 27.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 28.0f, colision_tile * 40.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 28.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 29.0f, colision_tile * 40.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 29.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 30.0f, colision_tile * 40.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 30.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 31.0f, colision_tile * 42.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 31.0f, colision_tile * 41.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 31.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 33.0f, colision_tile * 41.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 32.0f, colision_tile * 42.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 32.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 33.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 33.0f, colision_tile * 42.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 34.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 34.0f, colision_tile * 40.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 35.0f, colision_tile * 40.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 35.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 36.0f, colision_tile * 40.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 36.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 37.0f, colision_tile * 42.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 37.0f, colision_tile * 41.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 37.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 38.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 38.0f, colision_tile * 44.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 38.0f, colision_tile * 43.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 39.0f, colision_tile * 44.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 39.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 40.0f, colision_tile * 44.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 40.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 41.0f, colision_tile * 43.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 41.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 42.0f, colision_tile * 44.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 42.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 43.0f, colision_tile * 44.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 43.0f, colision_tile * 40.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 43.0f, colision_tile * 41.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 43.0f, colision_tile * 42.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 43.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 44.0f, colision_tile * 43.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 44.0f, colision_tile * 38.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 44.0f, colision_tile * 39.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 45.0f, colision_tile * 43.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 45.0f, colision_tile * 38.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 45.0f, colision_tile * 35.0f}, LoadTexture("test_collision.png")},

		// House Left/Down
		Prop{Vector2{colision_tile * 11.0f, colision_tile * 37.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 11.0f, colision_tile * 38.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 11.0f, colision_tile * 39.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 12.0f, colision_tile * 41.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 12.0f, colision_tile * 37.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 12.0f, colision_tile * 39.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 13.0f, colision_tile * 37.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 13.0f, colision_tile * 39.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 14.0f, colision_tile * 38.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 15.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 15.0f, colision_tile * 39.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 16.0f, colision_tile * 39.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 16.0f, colision_tile * 38.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 16.0f, colision_tile * 37.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 17.0f, colision_tile * 41.0f}, LoadTexture("test_collision.png")},
		//
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 41.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 39.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 38.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 37.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 2.0f, colision_tile * 37.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 3.0f, colision_tile * 39.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 3.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 4.0f, colision_tile * 38.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 4.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 5.0f, colision_tile * 39.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 5.0f, colision_tile * 37.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 6.0f, colision_tile * 41.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 6.0f, colision_tile * 39.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 6.0f, colision_tile * 38.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 6.0f, colision_tile * 37.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 7.0f, colision_tile * 40.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 7.0f, colision_tile * 35.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 7.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 7.0f, colision_tile * 37.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 8.0f, colision_tile * 40.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 8.0f, colision_tile * 35.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 8.0f, colision_tile * 36.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 8.0f, colision_tile * 37.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 16.0f, colision_tile * 33.0f}, LoadTexture("test_collision.png")},

		// Down/Left
		Prop{Vector2{colision_tile * 1.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 6.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 9.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 10.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 11.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 15.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 17.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},

		// Down/Right
		Prop{Vector2{colision_tile * 21.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 24.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 25.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 32.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 33.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
		Prop{Vector2{colision_tile * 34.0f, colision_tile * 47.0f}, LoadTexture("test_collision.png")},
	};

	SetTargetFPS(60);

	// Move player
	while (!IsKeyDown(KEY_ESCAPE))
	{
		BeginDrawing();
		ClearBackground(BLACK);

		map_pos = Vector2Scale(sword_man.Get_world_pos(), -1.0f);
		DrawTextureEx(map_01, map_pos, 0.0f, map_scale, WHITE);
		
		//Props texture
		for (auto prop : props) // Do on each props
		{
			prop.Render(sword_man.Get_world_pos());
		}

		// Draw map
		sword_man.Tick(GetFrameTime());

		// Check map bound
		if (sword_man.Get_world_pos().x > 2102.0f ||
			sword_man.Get_world_pos().y > 2275.0f ||
			sword_man.Get_world_pos().x < -545.0f ||
			sword_man.Get_world_pos().y < -380.0f)
		{
			sword_man.Get_last_frame();
		}

		// Check props collision
		for (auto prop : props) // Do on each props
		{
			if (CheckCollisionRecs(prop.Get_collision_rec(sword_man.Get_world_pos()), sword_man.Get_collision_rec()))
				sword_man.Get_last_frame();
		}

		DrawTextureEx(map_01_top, map_pos, 0.0f, map_scale, WHITE);
		EndDrawing();
	}
	CloseWindow();
	return (0);
}

// DrawText("RPG built by Nadia/nadesjar42", 10, 10, 20, RED);
// DrawText(TextFormat("LIFE: %i", life_point), 1020, 760, 20, RED);
