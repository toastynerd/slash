/*
 * Slash! a rogue clone ish
 * tylermorgan86@gmail.com
 * gpl3 2018
 * play.c
 */

#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

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
	exit(0);

}

int process_player_input(player *p)
{
	char ch;
	ch = getch();

	switch(ch) {
		case 'Q':
			cleanup();
			break;
		case 'h':
			move_player(p, DIREC_WEST);
			break;
		case 'j':
			move_player(p, DIREC_SOUTH);
			break;
		case 'k':
			move_player(p, DIREC_NORTH);
			break;
		case 'l':
			move_player(p, DIREC_EAST);
			break;
	}
	return 0;
}
