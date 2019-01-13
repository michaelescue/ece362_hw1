#Makefile for HW1 
#Author: Michael Escue
#Assignment: HW1
#Due Date: 01/17/19 

C = gcc
HW1OBJS = main.o max.o 1dalloc.o
HW1HDRS = hw3. verbose.h

#Question 1 make-code
all: hw3.1 hw3.2a hw3.2b

hw3.1: main.o 1dalloc.o max.o
	$(C) -o $@ $(HW3OBJS)

1dalloc.o: 1dalloc.c verbose.h
	$(C) -c 1dalloc.c
	
max.o: max.c verbose.h
	$(C) -c max.c
	
main.o: main.c hw3.h verbose.h
	$(C) -c main.c
	
clean: 
	rm $(HW1OBJS)


