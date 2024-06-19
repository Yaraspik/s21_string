GCC = gcc -std=c11 -Werror -Wextra -Wall

.PHONY: all rebuild clean

all: rebuild

rebuild: clean main

main: main.c s21_string.c
	$(GCC) $^ -o $@

clean:
	rm -rf *.out *.o