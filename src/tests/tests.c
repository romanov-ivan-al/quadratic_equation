#include <check.h>

#include "../quadratic_equation.h"


START_TEST(test_solve_equation_no_roots)
{
    double a = 15.3;
    double b = 17.9;
    double c = 12.6;
    int count_roots = solve_equation(a, b, c);
    ck_assert_int_eq(0, count_roots);
    
}
END_TEST

START_TEST(test_solve_equation_one_root)
{
    double a = 1.0;
    double b = 6.0;
    double c = 9.0;
    int count_roots = solve_equation(a, b, c);
    ck_assert_int_eq(1, count_roots);
}
END_TEST

// START_TEST(test_solve_equation_two_roots)
// {
//     double a = 1.0;
//     double b = 5.0;
//     double c = 6.0;
//     int count_roots = solve_equation(a, b, c);
//     ck_assert_int_eq(2, count_roots);
// }
// END_TEST
// START_TEST(test_discriminant_positive)
// {
//     double a = 1.0;
//     double b = -3.0;
//     double c = 2.0;
//     double result = discriminant(a, b, c);
//     ck_assert_double_eq(result, 1.0);
// }
// END_TEST

// START_TEST(test_discriminant_zero)
// {
//     double a = 1.0;
//     double b = -2.0;
//     double c = 1.0;
//     double result = discriminant(a, b, c);
//     ck_assert_double_eq(result, 0.0);
// }
// END_TEST

// START_TEST(test_discriminant_negative)
// {
//     double a = 2.0;
//     double b = 1.0;
//     double c = 3.0;
//     double result = discriminant(a, b, c);
//     ck_assert_double_eq(result, -23.0);
// }
// END_TEST

// START_TEST(test_count_root)
// {
//     double a = 1.0;
//     double b = -3.0;
//     double disc = 1.0;
//     double result = calculate_quadratic_roots(a, b, disc);
//     ck_assert_double_eq(result, 2.0);
// }
// END_TEST

int main(void)
{
    Suite *s1 = suite_create("Quadratic Equation");
    TCase *tc1 = tcase_create("Solve Equation");
    // TCase *tc2 = tcase_create("Discriminant and Count Root");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1);
    tcase_add_test(tc1, test_solve_equation_no_roots);
    tcase_add_test(tc1, test_solve_equation_one_root);
    // tcase_add_test(tc1, test_solve_equation_two_roots);

    // suite_add_tcase(s1, tc2);
    // tcase_add_test(tc2, test_discriminant_positive);
    // tcase_add_test(tc2, test_discriminant_zero);
    // tcase_add_test(tc2, test_discriminant_negative);
    // tcase_add_test(tc2, test_count_root);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
