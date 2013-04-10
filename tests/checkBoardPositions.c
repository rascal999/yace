#include <check.h>

#ifndef _INCL_GLOBALS
#define _INCL_GLOBALS
   #include	<stdio.h>
   #include	<stdlib.h>
   #include	<stdint.h>
#endif

#ifndef _INCL_BOARD
#define _INCL_BOARD
   #include "../src/board.h"
#endif

START_TEST (testCheckBoardSetup)
{
   int result = 1;
   Board board;

   result = piecesSetup(&board);
   fail_unless(result == 0);
   result = boardSetup(&board);
   fail_unless(result == 0);

   // Pawns
   fail_unless(board.square[8].resident->value == 1);
   fail_unless(board.square[9].resident->value == 1);
   fail_unless(board.square[10].resident->value == 1);
   fail_unless(board.square[11].resident->value == 1);
   fail_unless(board.square[12].resident->value == 1);
   fail_unless(board.square[13].resident->value == 1);
   fail_unless(board.square[14].resident->value == 1);
   fail_unless(board.square[15].resident->value == 1);

   fail_unless(board.square[48].resident->value == 1);
   fail_unless(board.square[49].resident->value == 1);
   fail_unless(board.square[50].resident->value == 1);
   fail_unless(board.square[51].resident->value == 1);
   fail_unless(board.square[52].resident->value == 1);
   fail_unless(board.square[53].resident->value == 1);
   fail_unless(board.square[54].resident->value == 1);
   fail_unless(board.square[55].resident->value == 1);
}
END_TEST

Suite * add_suite(void)
{
   Suite * s = suite_create("Add");

   /* Core test case */
   TCase *tc_core = tcase_create("Core");
   tcase_add_test(tc_core,testCheckBoardSetup);
   suite_add_tcase(s,tc_core);

   return s;
}

int main(void)
{
   int number_failed;
   Suite *s = add_suite();
   SRunner *sr = srunner_create(s);
   srunner_run_all(sr, CK_NORMAL);
   number_failed = srunner_ntests_failed(sr);
   srunner_free(sr);
   return (number_failed == 0) ? 0 : 1;
}
