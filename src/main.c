/*
 * Slash! a rogue clone ish
 * tylermorgan86@gmail.com
 * gpl 2 (see license)
 * main.c
*/

#include <ncurses.h>
#include <stdio.h>

#include "slash.h"
#include "room.h"

int main(int argc, char **argv)
{
	room r;
	room r2;
	if (init_room(&r, 1, 1, 15, 10) != 0)
		return 1;
	if (init_room(&r2, 5, 20, 15, 30) != 0)
		return 1;

	init(argc, argv)

	draw_room(&r);
	draw_room(&r2);
	refresh();
	getch();

	cleanup();

	return 0;
}
