/*
 * Slash! a rogue clone ish
 * tylermorgan86@gmail.com
 * gpl3 2018
 * play.c
 */

#include <ncurses.h>

#include "play.h"

//currently doesn't use argc or argv but will for save/load
int init(int argc, char **argv)
{
	initscr();
	raw();
	noecho();
	curs_set(0);

	return 0;
}

int cleanup()
{
	endwin();

	return 0;
}
