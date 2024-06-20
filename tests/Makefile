GCC = gcc -std=c11 -Werror -Wextra -Wall

.PHONY: all rebuild clean

all: rebuild

rebuild: clean tests

tests: tests.c ../src/s21_string.c
	$(GCC) $^ -o $@.o

clean:
	rm -rf *.out *.o