/**
Assignment 1: Circular History Buffer
Author: Michael Escue
DUe: 01/17/19

*/

/** Headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** Constants */
#define MAX_STRING 256
#define CIRBUSIZ 5		//< Circular buffer size
#define INIT 0		//< INIT Initializes the buffer.
#define STORE 1		//< STORE Stores the passed argument.
#define READ 2		//< READ Searches for the passed argument and returns. 

/** Data structs */
#ifndef CIRCBUF_H
#define CIRCBUF_H
struct _circbuf
{
	int stored_line_num;
	char string[MAX_STRING];
}*circbuf[CIRBUSIZ];
#endif

/** Function Prototypes */
struct _circbuf *circularbuffer(int op, int linenum, char string[MAX_STRING]);