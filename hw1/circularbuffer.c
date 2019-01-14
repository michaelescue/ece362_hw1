/**
Assignment 1: Circular History Buffer
Author: Michael Escue
DUe: 01/17/19

*/

/** Headers */
#include "circularbuffer.h"

/** Static Variables */
static int i = 0;

/**circularbuffer function */
struct _circbuf *circularbuffer(int op, int linenum, char string[MAX_STRING]){
	
	switch(op){		// Operations Switch
		case INIT:		//To initialize the buffer.
		{
			*circbuf = malloc(sizeof(circbuf));
			if(circbuf == NULL)	printf("Circular Buffer Allocation Failed!\n");
			return circbuf[i];				
			break;
		}
		case STORE:		// Storing data in the buffer.
		{
			circbuf[i]->stored_line_num = linenum;
			if(strcmp(string, strcpy(circbuf[i]->string, string)) == 0){;
				i = ((i+1) % CIRBUSIZ);
				return circbuf[i];
			}
			else {
				printf("Circular Buffer Store Failed!\n");
				return NULL;
			}
			break;
		}
		case READ:		//Reading data from the buffer.
		{
			for(int k = 0; k < CIRBUSIZ; k++){
				if(circbuf[i]->stored_line_num == linenum) //Compare the input string to the stored linenum of each index
					return circbuf[i];
			}
			return NULL;
			break;
		}
		default: 
			return NULL;
	}
	
	//Increment current line.
	
}