#include "quadratic_equation.h"

int solve_equation(double a, double b, double c) {
    int count_roots_ = 0;
    double d = discriminant(a, b, c);
    if (d < 0) {
        printf("The equation has no real roots.\n");
    } else if (d == 0) {
        printf("The equation has one real root:\n");
        printf("x = %.2f;\n", count_root(a, b, d));
        count_roots_ = 1;
    } else {
        printf("The equation has two real roots:\n");
        printf("x1 = %.2f,\n", count_root(a, b, d));
        printf("x2 = %.2f;\n", -count_root(a, b, d));
        count_roots_ = 2;
    }
    //Функция возвращает кол-во корней (D>0 - два корня, D=0 - один корень, D<0 - нет корней)
    return count_roots_;
}

double discriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}

double count_root(double a, double b, double discriminant) {
    return (-b + sqrt(discriminant)) / (2 * a);
}