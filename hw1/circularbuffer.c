/**
Assignment 1: Circular History Buffer
Author: Michael Escue
DUe: 01/17/19

*/

/** Headers */

#include "circularbuffer.h"

/** Static Variables */

static char i = 0;		//The index for the buffer.
static char buffer[CIRBUSIZ][MAX_STRING] = {{0},{0}};	//Initialized buffer.

/**circularbuffer function */

char *circularbuffer(bool op, int linenum, char *string[MAX_STRING]){
	
	if(op == STORE)		// Store line number and string.
	{
		buffer[i][0] = linenum;		// First char is the linenum of the stored string
		buffer[i][1] = '\0';		// Terminate the string.
		char *p = buffer[i][0];		// Point to the start of the string.
		strcat(string, p);			// Concatenate with the input string.
		i = ((i + 1) % CIRCUSIZ);	// Increments after store, with a limit to the integer buffer size. 
	}
	else if(op == READ)		// Read line number, if stored.
	{
		for(int k; k < CIRBUSIZ; k++)
		{
			if(buffer[k][0] == linenum)
			{
				char *q = buffer[k][1];
				return q;
			}
			else return NULL;
		}
		
		
	}
	
}