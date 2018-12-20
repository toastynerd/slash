/*
 * Slash! a rogue clone ish
 * tylermorgan86@gmail.com
 * gpl 2 or something
 * player.h
*/

#include "slash.h"

#ifndef _PLAYER_H_
#define _PLAYER_H_

typedef struct {
	int x;
	int y;
} player;

int draw_player(player *);

int init_player(player *, int, int);

int move_player(player *, Directions);

#endif
