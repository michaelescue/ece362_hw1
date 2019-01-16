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
static int current_linenum = 1;

/** prompt */
int prompt(void){
	printf("%d> ", current_linenum);
	
	int status = 0;
	char input[MAX_STRING];
	char *p_input = input;

	scanf("%s", p_input);		// Receives input string.
	getchar();		// Grabs hanging input.
	
	status = inputhdlr(current_linenum, p_input);
	
	if(status == 1){
		printf("Exiting Program.\n");
		return 1;
	}
	else if(status != 0){
		printf("Enter a valid command: ");
	}
}
