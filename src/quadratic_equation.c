#include "quadratic_equation.h"

void solve_equation(double a, double b, double c) {
    double d = discriminant(a, b, c);
    if (d < 0) {
        printf("The equation has no real roots\n");
    } else if (d == 0) {
        printf("The equation has one real root\n");
        printf("x = %f\n", count_root(a, b, c, d));
    } else {
        printf("The equation has two real roots\n");
        printf("x1 = %f\n", count_root(a, b, c, d));
        printf("x2 = %f\n", -count_root(a, b, c, d));
    }
}

double discriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}

double count_root(double a, double b, double c, double discriminant) {
    return (-b + sqrt(discriminant)) / (2 * a);
}