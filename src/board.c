/*
 * =====================================================================================
 *
 *       Filename:  board.c
 *
 *    Description:  Functions used to manipulate the board
 *
 *        Version:  1.0
 *        Created:  10/04/13 18:02:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aidan Marlin (aidan.marlin+github@gmail.com), 
 *   Organization:  None
 *
 * =====================================================================================
 */

#ifndef _INCL_GLOBALS
#define _INCL_GLOBALS
   #include	<stdio.h>
   #include	<stdlib.h>
   #include	<stdint.h>
#endif

#ifndef _INCL_BOARD
#define _INCL_BOARD
   #include "board.h"
#endif

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  boardSetup
 *  Description:  
 * =====================================================================================
 */
   int
boardSetup ( Board *board )
{
   int i;

   // White pawns
   for ( i = 0 ; i < 8 ; i++ ) {
      board->square[i + 8].resident = &board->pieces[i];
   }

   // Black pawns
   for ( i = 0 ; i < 8 ; i++ ) {
      board->square[i + 48].resident = &board->pieces[i + 16];
   }

   // White pieces
//   board->square[0].resident = &board->pieces[8]; // Rook
//   board->square[1].resident = &board->pieces[9]; // Knight
//   board->square[2].resident = &board->pieces[10]; // Bishop
//   board->square[3].resident = &board->pieces[11]; // Queen
//   board->square[4].resident = &board->pieces[12]; // King
//   board->square[5].resident = &board->pieces[13]; // Bishop
//   board->square[6].resident = &board->pieces[14]; // Knight
//   board->square[7].resident = &board->pieces[15]; // Rook

   // Black pieces
//   board->square[56].resident = &board->pieces[24]; // Rook
//   board->square[57].resident = &board->pieces[25]; // Knight
//   board->square[58].resident = &board->pieces[26]; // Bishop
//   board->square[59].resident = &board->pieces[27]; // King
//   board->square[60].resident = &board->pieces[28]; // Queen
//   board->square[61].resident = &board->pieces[29]; // Bishop
//   board->square[62].resident = &board->pieces[30]; // Knight
//   board->square[63].resident = &board->pieces[31]; // Rook

   return EXIT_SUCCESS;
}		/* -----  end of function boardSetup  ----- */
