/*
 * Slash! a rogue clone ish
 * tylermorgan86@gmail.com
 * gpl3 2018
 * player.c
 */

#include <ncurses.h>

#include "player.h"
#include "movement.h"

int init_player(player *p, int ix, int iy)
{
	p->x = ix;
	p->y = iy;

	return 0;
}

int draw_player(player *p) 
{
	mvaddch(p->y, p->x, '@');
	return 0;
}

int move_player(player *p, Directions direction)
{
	if (direction == DIREC_NORTH && can_move(p->y - 1, p->x)) 
		p->y = p->y -1;
	if (direction == DIREC_SOUTH && can_move(p->y + 1, p->x))
		p->y = p->y + 1;
	if (direction == DIREC_EAST && can_move(p->y, p->x + 1))
		p->x = p->x + 1;
	if (direction == DIREC_WEST && can_move(p->y, p->x - 1))
		p->x = p->x - 1;

	return 0;
}
