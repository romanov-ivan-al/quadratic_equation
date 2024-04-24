CC = gcc -std=c11 -Wall -Wextra -Werror
OS = $(uname)

ifeq ($(OS), Linux)
	FLAGS = -lcheck -lm -lpthread -lrt -lsubunit
else
	FLAGS = -lcheck -lm -lpthread
endif

FLAGS = -lcheck -lm -lpthread -lrt -lsubunit

all: quadratic_equation.a

quadratic_equation.a:
	$(CC) -c quadratic_equation.c
	ar -rc quadratic_equation.a quadratic_equation.o
	ranlib quadratic_equation.a
	rm -f *.o


check: clean quadratic_equation.a test.o
	$(CC) test.o quadratic_equation.a $(FLAGS)  -o test
	./test

test.o:
	$(CC) -c ./tests/tests.c -o test.o

clean:
	rm -f test quadratic_equation.a *.o
