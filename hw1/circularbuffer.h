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
#define STORE 1		//< STORE Stores the passed argument.
#define READ 0		//< READ Searches for the passed argument and returns.
#define HISTORY 2		//< HISTORY returns all values.
#define NO_RESULT 3
#define INVALID 4

/** Function Prototypes */
char *circularbuffer(int op, int linenum, char *string);
