/*
 * Slash! A rogue clone ish
 * tylermorgan86@gmail.com
 * gpl3 2018
 * testing for slash, use make test
 * test.c
 */

#include <CUnit/Basic.h>

#include "room_test.h"

int main(int argc, char **argv)
{
	if (CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();

	all_room_test();
	CU_basic_set_mode(CU_BRM_VERBOSE);

	CU_basic_run_tests();
	return CU_get_error();
}
