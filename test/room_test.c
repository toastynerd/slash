/*
 * Slash! A rogue clone ish
 * tylermorgan86@gmail.com
 * gpl 2018
 * testing for slash, use make test
 * unit tests for src/room.c
 * room_test.c
 */

#include <CUnit/Basic.h>

#include "test_helpers.h"
#include "room_test.h"

void test_room_init()
{
	room r;
	CU_ASSERT_EQUAL(init_room(&r, 1, 1, 5, 5), 0);
	CU_ASSERT_EQUAL(r.topx, 1);
	CU_ASSERT_EQUAL(r.topy, 1);
	CU_ASSERT_EQUAL(r.botx, 5);
	CU_ASSERT_EQUAL(r.boty, 5);
}

void test_room_init_fail()
{
	room r;
	CU_ASSERT_EQUAL(init_room(&r, 5, 5, 1, 1), -1);
}

void test_room_delta_x()
{
	room r;
	room r2;
	CU_ASSERT_EQUAL(init_room(&r, 1, 1, 2, 2), 0);
	CU_ASSERT_EQUAL(init_room(&r2, 1, 1, 6, 6), 0);

	CU_ASSERT_EQUAL(room_delta_x(&r), 1);
	CU_ASSERT_EQUAL(room_delta_x(&r2), 5);
}

void test_room_delta_y()
{
	room r;
	room r2;
	CU_ASSERT_EQUAL(init_room(&r, 1, 1, 2, 2), 0);
	CU_ASSERT_EQUAL(init_room(&r2, 1, 1, 6, 6), 0);

	CU_ASSERT_EQUAL(room_delta_y(&r), 1);
	CU_ASSERT_EQUAL(room_delta_y(&r2), 5);
}

void all_room_test()
{
	CU_pSuite pSuite = NULL;
	pSuite = CU_add_suite("room_test_suite", 0, 0);

	if (pSuite == NULL) {
		CU_cleanup_registry();
		CU_get_error();
	}

	if (NULL == CU_add_test(pSuite, "room_init", test_room_init )) 
		return add_suite_fail();

	if (NULL == CU_add_test(pSuite, "room_init_fail", test_room_init_fail)) 
		return add_suite_fail();

	if (NULL == CU_add_test(pSuite, "room_delta_x", test_room_delta_x))
		return add_suite_fail();

	if (NULL == CU_add_test(pSuite, "room_delta_y", test_room_delta_y))
		return add_suite_fail();
}
