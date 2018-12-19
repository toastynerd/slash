/*
 * Slash! A rogue clone ish
 * tylermorgan86@gmail.com
 * gpl 2 or something
 * room.h
 */

#include "slash.h"

#ifndef _ROOM_H_
#define _ROOM_H_

typedef struct {
	int topx;
	int topy;
	int botx;
	int boty;
} room;

int genroom(room *);
int drawroom(room *);
#endif
