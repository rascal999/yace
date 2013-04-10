/*
 * =====================================================================================
 *
 *       Filename:  board.h
 *
 *    Description:  Structures for chess board
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

typedef struct {
   uint8_t piece;
   uint8_t side;
   uint8_t value;
} Piece;

typedef struct {
   Piece *resident;
} Square;				/* ----------  end of struct square  ---------- */

typedef struct {
   Piece pieces[32];
   Square square[64];
} Board;				/* ----------  end of struct board  ---------- */

int boardSetup( Board *board );
