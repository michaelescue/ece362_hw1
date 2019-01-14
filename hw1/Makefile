#Makefile for HW1 
#Author: Michael Escue
#Assignment: HW1
#Due Date: 01/17/19 

C = gcc
obs = main.o prompt.o inputhdlr.o circularbuffer.o
hdrs = hw1.h prompt.h inputhdlr.h circularbuffer.h

#Homework 1
all: hw1

hw1: main.o prompt.o inputhdlr.o circularbuffer.o
	$(C) -o $@ $(HW3OBJS)
	
main.o: main.c hw1.h 
	$(C) -c main.c
	
prompt.o: prompt.c prompt.h
	$(C) -c prompt.c
	
inputhdlr.o: inputhdlr.c inputhdlr.h
	$(C) -c inputhdlr.c 
	
circularbuffer.o: circularbuffer.c circularbuffer.h
	$(C) -c circularbuffer.c 	
	
clean: 
	rm $(obs)


