CC = gcc -std=c11 -Wall -Wextra -Werror
OS = $(uname)

ifeq ($(OS), Linux)
	FLAGS = -lcheck -lm -lpthread -lrt -lsubunit
else
	FLAGS = -lcheck -lm -lpthread
endif

all: quadratic_equation.a

quadratic_equation.a:
	$(CC) -c quadratic_equation.c
	ar -rc quadratic_equation.a quadratic_equation.o
	ranlib quadratic_equation.a
	rm -f *.o


check: clean quadratic_equation.a
	$(CC) quadratic_equation.a ./tests/tests.c $(FLAGS) -o test
	./test

clean:
	rm -f test quadratic_equation.a *.o