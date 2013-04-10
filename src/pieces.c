/*
 * =====================================================================================
 *
 *       Filename:  pieces.c
 *
 *    Description:  Functions related to the chess pieces
 *
 *        Version:  1.0
 *        Created:  10/04/13 18:13:26
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
 *         Name:  piecesSetup
 *  Description:  
 * =====================================================================================
 */
   int
piecesSetup ( Board *board )
{
   int i;

   for ( i = 0 ; i < 8 ; i++ ) {
      // White pawn
      board->pieces[i].piece = 1;
      board->pieces[i].side = 0;
      board->pieces[i].value = 1;
   }

   for ( i = 0 ; i < 8 ; i++ ) {
      // Black pawn
      board->pieces[i + 16].piece = 1;
      board->pieces[i + 16].side = 1;
      board->pieces[i + 16].value = 1;
   }

   return EXIT_SUCCESS;
}		/* -----  end of function piecesSetup  ----- */
