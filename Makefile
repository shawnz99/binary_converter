
CC = gcc
CFLAGS = -g -Wall

convtobinary: convtobinary.c
	 $(CC) $^ -o $@ $(CFLAGS)

clean: 
	 rm convtobinary


.PHONY: clean



