# list/Makefile
#
# Makefile for list implementation and test file.
#
# <Author>
list: main.c list.c
	gcc -o main list.c main.c -I.
