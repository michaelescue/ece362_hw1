/**
Assignment 1: Circular History Buffer
Author: Michael Escue
DUe: 01/17/19

*/

/** Headers */
#include "stringtoint.h"

//This fucnction takes numerical values and creates an int.

int stringtoint(char *string){
	int integer = atoi(*string);
	return integer;
}