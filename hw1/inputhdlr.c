/**
Assignment 1: Circular History Buffer
Author: Michael Escue
DUe: 01/17/19

*/

/** Headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inputhdlr.h"
#include "circularbuffer.h"


char *inputhdlr(int current_linenum){
	
	char argument[MAX_STRING] = {0};
	
	// Console Read.
	int i = scanf("%s", &argument);
	getchar(); 
	
	// Error checking.
	if (i == -1)
	{
		printf("Input Handler scan error!\n");
		return NULL;
	}
	else if (i > 3)
	{
		printf("Too Many Arguments!\n");
		return NULL;
	}
	
	// Command logic, which needs to be implemented in a hash function eventually for larger instruction sets.

	int compare = strncmp(argument, "!", 1);
	if(compare == 0)
	{
		int temp_line_num = 0;
		struct _circbuf *temp = NULL;
		char argument2[MAX_STRING] = {0};
		
		// Shift the string argument to remove the "!".
		for(int l = 0; l < (MAX_STRING-1); l++)
		{
			for(int m = 1; m < MAX_STRING ; m++)
			{
				argument2[l] = argument[m];
			}
		}
	
		
		
		temp_line_num = atoi(argument2);
		temp = circularbuffer(READ, temp_line_num, " ");
		
		if(temp == NULL) printf("No Match.\n");
		return temp->string;
	}
	
}