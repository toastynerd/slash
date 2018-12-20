/*
 * Slash! A rogue clone ish
 * tylermorgan86@gmail.com
 * gpl 2018
 * test helpers for slash
 * test_helpers.c
 */

#include "test_helpers.h"

void add_suite_fail()
{
	CU_cleanup_registry();
	CU_get_error();
	return;
}
