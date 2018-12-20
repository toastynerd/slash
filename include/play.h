/*
 * Slash! a rogue clone ish
 * tylermorgan86@gmail.com
 * gpl2 or something
 * play.h
 */

#include "slash.h"
#include "player.h"

#ifndef _PLAY_H_
#define _PLAY_H_

int init(int, char**);
int cleanup();

int process_player_input(player *);

#endif
