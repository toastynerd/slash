/*
 * Slash! A rogue clone ish
 * tylermorgan86@gmail.com
 * gpl3 2018
 * room.c
 */

#include <ncurses.h>

#include "slash.h"
#include "room.h"

int init_room(room *r, itopx, itopy, ibotx, iboty)
{
	if (ibotx < itopx || iboty < itopy)
		return -1;
	r->topx = itopx;
	r->topy = itopy;
	r->botx = ibotx;
	r->boty = iboty;

	return 0;
}

int delta_x(room *r)
{ 
	return r->botx - r->topx;
}

int drawroom(room *r)
{
	int x, y;
}
