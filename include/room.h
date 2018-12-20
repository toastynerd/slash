/*
 * Slash! A rogue clone ish
 * tylermorgan86@gmail.com
 * gpl 2 or something
 * room.h
 */

#include "slash.h"

#ifndef _ROOM_H_
#define _ROOM_H_

/* 
 * for simplicity, rooms are only rectangular. Only the top
 * left and bottom coordinates are tracked.
 */
typedef struct {
	// top left corner
	int topx;
	int topy;
	// bottom right corner
	int botx;
	int boty;
} room;

int init_room(room *, int, int, int, int);

int room_delta_x(room *);
int room_delta_y(room *);

int gen_room(room *);
int draw_room(room *);
#endif
