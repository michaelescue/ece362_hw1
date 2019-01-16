/**
Assignment 1: Circular History Buffer
Author: Michael Escue
DUe: 01/17/19

*/

/** Headers */
#include <stdio.h>
	#include <stdlib.h>
	#include <math.h>
	#include "inputhdlr.h"
	#include "circularbuffer.h"
	#include "prompt.h"
	
/** Functions

	-Prompt which has the current historical input line # in the prompt. 
	-Bash like history capability which assigns numbers beginning at 1 to each input line received.	

*/

int main(){
	
	// Initialize Circular Buffer
	circularbuffer(INIT,0," ");

	while(1){ // ad infinitum 
	
	#ifdef VERBOSE
	printf("Start!\n");
	#endif
	
	
	
	}
	return 0;
}