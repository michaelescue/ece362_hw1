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

/** inputhdlr */
int inputhdlr(char *current_linenum, char *p_input)
{

	if(strcmp(p_input, "exit") == 0)
	{
		return EXIT;
	}
/*	else if(strncmp(p_input, "parse ", 6) == 0)
	{
		...
	}
*/
	else if( (strncmp(p_input, "!", 1) == 0) || (strcmp(p_input, "history") == 0))
	{
		// Checks if entered string is !x command.
		if(strncmp(p_input, "!", 1) == 0)
		{

			p_input = p_input + 1;
			// Advance the pointer in the string to the [1] index, where [0] is !.
			char linenum = 0;
			// Temp value for passing the READ value.
			linenum = atoi(p_input);
			// String input to integer value conversion.
			linenum = (char) abs(linenum);
			// Absolute value. Fun fact, returns an int. Not a char.
			p_input = p_input - 1;
			// Reset pointer to beginning, is used later inline.
			if(linenum == 0)
				//Checks for error. There should never be a line "0". Also, abs() retuns 0 on failures.
			{
				printf("\'%s\' is not a valid command. Format is: ![integer]\n", p_input); //Error message
				return 1;
				// Return "unsuccessfull".
			}

			char *p_output = NULL;
			p_output = circularbuffer(READ, linenum, NULL);
			// Pass operation to READ, with linenum to search for, along with arbitrary string input.
			printf("= %s\n", p_output);
			inputhdlr(current_linenum, p_output);
		}
		if(strcmp(p_input, "history") == 0)
		{
			circularbuffer(HISTORY, *current_linenum, p_input);
			// Execute history display in buffer.
		}

		circularbuffer(STORE, *current_linenum, p_input);
		// STORE the instruction in the buffer.
		*current_linenum = *current_linenum + 1;
		return 0;
	}

	else
	return INVALID;
}
