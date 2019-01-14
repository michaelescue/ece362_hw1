/**
Assignment 1: Circular History Buffer
Author: Michael Escue
DUe: 01/17/19

*/

/** Headers */
#include "inputhdlr.h"

int inputhdlr(int current_linenum, char *argument[MAX_STRING]){
	
	// Console Read.
	int i = scanf("%s", &argument);
	getchar(); 
	
	// Error checking.
	if (i == -1)
	{
		printf("Input Handler scan error!\n");
		return 1;
	}
	else if (i > 3)
	{
		printf("Too Many Arguments!\n");
		return 1;
	}
	
	// Command logic, which needs to be implemented in a hash function eventually for larger instruction sets.

	if(strncmp(*argument, "!", 1) == 0)
	{
		int temp_line_num = 0;
		struct _circbuf *temp = NULL;
		
		temp_line_num = stringtoint((&argument+1));
		temp = circularbuffer(READ, temp_line_num, " ");
		
		if(temp == NULL) printf("No Match.\n");
		else argument = temp->string;
	}
	return 0;	
}