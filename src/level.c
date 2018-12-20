/*
 * Slash! a rogue clone ish
 * tylermorgan86@gmail.com
 * gpl 2018
 * level.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "level.h"

int init_level(level *l, int irank)
{
	l->rank = irank;
	l->room_head = NULL;
}

int add_room(level *l, room *r)
{
	room_node *rn = create_room_node(r);
	rn->next = l->room_head;
	l->room_head = rn;
	return 0;
}

int draw_rooms(level *l)
{
	room_node *current;
	current = l->room_head;
	while(current != NULL) {
		draw_room(current->r);
		current = current->next;
	}

	return 0;
}

int draw_level(level *l)
{
	draw_rooms(l);
	return 0;
}
