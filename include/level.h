/*
 * Slash! A rogue clone ish
 * tylermorgan86@gmail.com
 * gpl3 2018
 * level.h
 */

#include "slash.h"
#include "room.h"

#ifndef _LEVEL_H_
#define _LEVEL_H_

typedef struct {
	int rank;
	room_node *room_head;
} level;

int init_level(level*, int);

int add_room(level *, room *);
int draw_rooms(level *);
int draw_level(level *);

#endif
