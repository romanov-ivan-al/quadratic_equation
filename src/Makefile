CC = gcc -std=c11 -Wall -Wextra -Werror

ifeq ($(OS), Linux)
	FLAGS = -lcheck -lm -lpthread -lrt -lsubunit
else
	FLAGS = -lcheck -lm
endif

quadratic_equation.a: $(FILESo)
	ar -rc quadratic_equation.a $(FILESo)
	ranlib quadratic_equation.a
	rm -f *.o


check:
	$(CC) quadratic_equation.c ./tests/tests.c $(FLAGS) -o test
	./test