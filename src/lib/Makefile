CC = gcc
CFLAGS = -std=c11 -Werror -Wextra -Wall
LDLIBS = -lcheck -lm -lsubunit

.PHONY: all rebuild clean

all: rebuild

rebuild: clean main

main: main.c
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)
	
clean:
	rm -rf *.out *.o