	#Makefile for HW1 
#Author: Michael Escue
#Assignment: HW1
#Due Date: 01/17/19 

C = gcc
obs = main.o prompt.o inputhdlr.o circularbuffer.o
hdrs = prompt.h inputhdlr.h circularbuffer.h

#Homework 1
all: hw1
debug: debug

hw1: main.o prompt.o inputhdlr.o circularbuffer.o
	$(C) $(obs) -g -o $@.exe

debug: main.o prompt.o inputhdlr.o circularbuffer.o
	$(C) $(obs) -g -D VERBOSE -o $@.exe
	
main.o: main.c 
	$(C) -c -g main.c
	
prompt.o: prompt.c prompt.h
	$(C) -c -g prompt.c
	
inputhdlr.o: inputhdlr.c inputhdlr.h
	$(C) -c -g inputhdlr.c 
	
circularbuffer.o: circularbuffer.c circularbuffer.h
	$(C) -c -g circularbuffer.c 	
	
clean: 
	rm $(obs)


