/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Setup functions and main loop
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
 *         Name:  main
 *  Description:  Initialise board and loop
 * =====================================================================================
 */
   int
main ( int argc, char *argv[] )
{
   Board board;

   // Setup pieces
   piecesSetup(&board);

   // Setup board
   boardSetup(&board);

   printf("%d\n",board.pieces[0].piece);
   printf("%d\n",board.square[0].resident->value);

   return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
