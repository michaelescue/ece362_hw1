/**
Assignment 1: Circular History Buffer
Author: Michael Escue
DUe: 01/17/19

*/

/**

prompt handles the display and input from users.

*/

/** Headers  */
#include <stdio.h>
#include "prompt.h"
#include "inputhdlr.h"
#include "circularbuffer.h"


/** Macros */
static char current_linenum = 1;

/** prompt */
int prompt(void){
	printf("%d> ", current_linenum);
	
	int status = 0;
	char input[MAX_STRING] = {0};
	char *p_input = &input[0];
	char *p_current_linenum = &current_linenum;

	
	scanf("%s", input);		// Receives input string.
	getchar();		// Grabs hanging input.
	
	status = inputhdlr(p_current_linenum, input);
	
	switch(status)
	{
		case(EXIT):
		{
			printf("Exiting Program.\n");
			return 1;
		}
		case(INVALID):
		{
			printf("Enter a valid command: ");
			return 0;
		}
		case(NO_RESULT):
		{
			printf("No match found in buffer.\n");
			return 0;
		}
		default:
		{
			return 0;
		}
	}
}
