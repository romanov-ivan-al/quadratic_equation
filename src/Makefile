CC = gcc -std=c11 -Wall -Wextra -Werror


ifeq ($(OS), Linux)
	FLAGS = -lcheck -lm -lpthread -lrt -lsubunit
else
	FLAGS = -lcheck -lm
endif


check: clean
	$(CC) quadratic_equation.c ./tests/tests.c $(FLAGS) -o test
	./test

clean:
	rm -f test