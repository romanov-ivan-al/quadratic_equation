#ifndef SRC_QUADRATIC_EQUATION_H
#define SRC_QUADRATIC_EQUATION_H

#include <stdio.h>
#include <math.h>

int solve_equation(double a, double b, double c);

double discriminant(double a, double b, double c);
double calculate_quadratic_roots(double a, double b, double discriminant);

#endif
