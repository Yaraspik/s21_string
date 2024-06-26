CC = gcc
CFLAGS = -std=c11 -Werror -Wextra -Wall
LDLIBS = -lcheck -lm -lsubunit
GCOV = -fprofile-arcs -ftest-coverage

.PHONY: all rebuild clean

all: rebuild

rebuild: clean s21_test_memchr

s21_test_memchr: s21_test_memchr.c
	$(CC) $(CFLAGS) $^ -o $@ $(LDLIBS)

clean:
	rm -rf *.out *.o *.gcno *.gcda *.gcov