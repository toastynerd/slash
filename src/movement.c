/*
 * Slash! a rogue clone ish
 * tylermorgan86@gmail.com
 * gpl3 2018
 * movement.h
 */

#include "movement.h"

char can_move(int y, int x)
{
	char next;
	next = mvinch(y, x);
	if (next == '.' || next == '#')
		return 1;
	return 0;
}
