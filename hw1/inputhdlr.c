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


int inputhdlr(int current_linenum, char *p_input){

	if(strncmp(p_input, "!", 1) == 0)		// Checks if entered string is !x command.
	{
		p_input = p_input + 1;		// Advance the pointer in the string to the [1] index, where [0] is !.
		int linenum = 0;		// Temp value for passing the READ value. 
		linenum = atoi(p);		// String input to integer value conversion.
		linenum = abs(linenum);		// Absolute value.
		p_input = p_input - 1;		// Reset pointer to beginning.
		if(linenum == 0)		//Checks for error. There should never be a line "0". Also, abs() retuns 0 on failures.
		{
			printf("\'%s\' is not a valid command. Format is: ![integer]\n", p_input); //Error message
			return 1;		// Return "unsuccessfull".
		}
		if((p_input = circularbuffer(READ, linenum, " ")) != NULL)		// Pass operation to READ, with linenum to search for, along with arbitrary string input.
		{
			circularbuffer(STORE, current_linenum, p_input);		//Store instruction.
			inputhdlr(
		}
	}

}
	