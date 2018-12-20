/*
 * Slash! A rogue clone ish
 * tylermorgan86@gmail.com
 * gpl3 2018
 * room.c
 */

#include <ncurses.h>

#include "slash.h"
#include "room.h"

int init_room(room *r, int itopx, int itopy, int ibotx, int iboty)
{
	if (ibotx <= itopx || iboty <= itopy)
		return -1;
	r->topx = itopx;
	r->topy = itopy;
	r->botx = ibotx;
	r->boty = iboty;

	return 0;
}

int room_delta_x(room *r)
{ 
	return r->botx - r->topx;
}

int room_delta_y(room *r)
{
	return r->boty - r->topy;
}

int drawroom(room *r)
{
	return 0;
}
