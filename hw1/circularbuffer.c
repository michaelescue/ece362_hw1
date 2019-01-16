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

/**circularbuffer */
char *circularbuffer(int op, char linenum, char *string){
	
	switch(op)
	{
		case (STORE):		// Store line number and string.
		{
			buffer[i][0] = linenum;		// First char is the linenum of the stored string
			char *p_buffer = &buffer[i][1];
			strcpy(p_buffer, string);
			i = ((i + 1) % CIRBUSIZ);	// Increments after store, with a limit to the integer buffer size.
			return NULL;
		}
		
		case (READ):		// Read line number, if stored.
		{
			for(int k; k < CIRBUSIZ; k++)
			{
				if(buffer[k][0] == linenum)
				{
					char *q = &buffer[k][1];
					return q;
				}
				else return NULL;
			}
		}
		
		case (HISTORY):		// Display contents.
		{
			printf("Line\tComand\n");
			printf("______________\n");
			
			for(int j = 0; j < CIRBUSIZ; j++)
			{
				char *p_buff = &buffer[j][0];
				
				if(buffer[j][0] != 0) printf("%c\t%s\n", p_buff, (p_buff+1));
			}
			return NULL;
		}
		
		default:
		{
			printf("Buffer Operation failed.\n");
			return NULL;
		}
		
	}
	
}