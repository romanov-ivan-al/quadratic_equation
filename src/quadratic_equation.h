#ifndef SRC_QUADRATIC_EQUATION_H
#define SRC_QUADRATIC_EQUATION_H

#include <stdio.h>
#include <math.h>

int solve_equation(double a, double b, double c);

double discriminant(double a, double b, double c);
double count_root(double a, double b, double discriminant);

#endif
