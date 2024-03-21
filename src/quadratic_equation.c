#include "quadratic_equation.h"

int solve_equation(double a, double b, double c) {
    //Функция решает квадратное уравнение, возвращает кол-во корней
    int count_roots_ = 0;
    double d = discriminant(a, b, c);
    if (d < 0) {
        printf("The equation has no real roots.\n");
    } else if (d == 0) {
        printf("The equation has one real root:\n");
        printf("x = %.2f;\n", calculate_quadratic_roots(a, b, d));
        count_roots_ = 1;
    } else {
        printf("The equation has two real roots:\n");
        printf("x1 = %.2f,\n", calculate_quadratic_roots(a, b, d));
        printf("x2 = %.2f;\n", -calculate_quadratic_roots(a, b, d));
        count_roots_ = 2;
    }
    //Функция возвращает кол-во корней (D>0 - два корня, D=0 - один корень, D<0 - нет корней)
    return count_roots_;
}

double discriminant(double a, double b, double c) {
    //Функция вычисляет дискриминант и возвращает его
    return b * b - 4 * a * c;
}

double calculate_quadratic_roots(double a, double b, double discriminant) {
    //Функция вычисляет корни квадратного уравнения и возвращает один из них
    return (-b + sqrt(discriminant)) / (2 * a);
}