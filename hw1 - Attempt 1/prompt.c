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


/** Macros */
static int current_linum = 1;

int prompt(void){
	printf("%d> ");
	inputhdlr(current_linum);
}
