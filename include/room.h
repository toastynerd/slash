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

typedef struct {
	room *r;
	struct room_node *next;
} room_node;

int init_room(room *, int, int, int, int);
room* create_room(int, int, int, int);
room_node* create_room_node(room *);

int room_delta_x(room *);
int room_delta_y(room *);

int gen_room(room *);
int draw_room(room *);
#endif
