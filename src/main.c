/*
 * Slash! a rogue clone ish
 * tylermorgan86@gmail.com
 * gpl 2 (see license)
 * main.c
*/

#include <ncurses.h>
#include <stdio.h>

#include "slash.h"
#include "play.h"
#include "room.h"
#include "player.h"
#include "level.h"

int main(int argc, char **argv)
{
	level level1;
	init_level(&level1, 0);
	player p;
	add_room(&level1, create_room(1, 1, 15, 15));
	add_room(&level1, create_room(1, 20, 25, 30));
	add_room(&level1, create_room(20, 1, 30, 25));
	
	init_player(&p, 3, 3);

	init(argc, argv);

	for(;;) {
		draw_level(&level1);
		draw_player(&p);

		process_player_input(&p);
	
		refresh();
	}

	cleanup();

	return 0;
}
