/*
 * Slash! A rogue clone ish
 * tylermorgan86@gmail.com
 * gpl3 2018
 * room.c
 */

#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

#include "slash.h"
#include "room.h"

// internal methods, mostly helpers for other functions

int draw_end_row(int y, int leftx, int cols)
{
	int i;
	for(i = 0; i < (cols + 1); i++)
		mvaddch(y,leftx + i, '-');
	return 0;
}

int draw_light_row(int y, int leftx, int cols)
{
	int i;
	mvaddch(y, leftx, '|');
	mvaddch(y, leftx + cols, '|');
	for (i = 1; i < (cols); i++)
		mvaddch(y, leftx + i, '.');
	return 0;
}

// room methods

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

room *create_room(int itopx, int itopy, int ibotx, int iboty)
{
	room *r = (room*)malloc(sizeof(room));
	r->topx = (int *)malloc(sizeof(int));
	r->topy = (int *)malloc(sizeof(int));
	r->botx = (int *)malloc(sizeof(int));
	r->boty = (int *)malloc(sizeof(int));

	init_room(r, itopx, itopy, ibotx, iboty);
	return r;
}

room_node *create_room_node(room *r)
{
	room_node *rn = (room_node *)malloc(sizeof(room_node));
	rn->r = r;
	rn->next = NULL;
	return rn;
}

int room_delta_x(room *r)
{ 
	return r->botx - r->topx;
}

int room_delta_y(room *r)
{
	return r->boty - r->topy;
}

int draw_room(room *r)
{
	int i;
	draw_end_row(r->topy, r->topx, room_delta_x(r));
	draw_end_row(r->boty, r->topx, room_delta_x(r));
	for(i = 1; i < room_delta_y(r); i++)
		draw_light_row(r->topy + i, r->topx, room_delta_x(r));
	return 0;
}
