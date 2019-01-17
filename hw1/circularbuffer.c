/**
Assignment 1: Circular History Buffer
Author: Michael Escue
DUe: 01/17/19

*/

/** Headers */
#include "circularbuffer.h"

/** Static Variables */
static int i = 0;		//The index for the buffer.
static char buffer[CIRBUSIZ][MAX_STRING] = {{'\0'},{'\0'}};	//Initialized buffer.

/**circularbuffer */
char *circularbuffer(int op, int linenum, char *string){

	switch(op)
	{
		case (STORE):
		// Store line number and string.
		{
			char *p_buffer = &buffer[i][0];
			// First char is the linenum of the stored string
			memset(p_buffer, 0, MAX_STRING);
			*p_buffer = linenum;
			p_buffer = p_buffer + sizeof(linenum);
			*p_buffer = ' ';
			p_buffer = p_buffer + 1;
			strncpy(p_buffer, string, (MAX_STRING-sizeof(linenum+1)));
			p_buffer = p_buffer - sizeof(linenum) - 2;
			i = ((i + 1) % CIRBUSIZ);
			// Increments after store, with a limit to the integer buffer size.
			return NULL;
		}

		case (READ):
		// Read line number, if stored.
		{
			for(int k; k < CIRBUSIZ; k++)
			{
				if(buffer[k][0] == linenum)
				{
					char *q = &buffer[k][1];
					return q;
				}

			}
			return NULL;
		}


		case (HISTORY):
		// Display contents.
		{
			printf("\nLine\tCommand\n");
			printf("_______________\n\n");

			for(int j = 0; j < CIRBUSIZ; j++)
			{
				char *p_buff = &buffer[j][0];
				if(*p_buff != '\0') printf("%i\t %s\n", *p_buff, (p_buff+sizeof(int)+1));
			}
			printf("_______________\n\n");
			return NULL;

		}

		default:
		{
			printf("Buffer Operation failed.\n");
			return NULL;
		}


	}
}
