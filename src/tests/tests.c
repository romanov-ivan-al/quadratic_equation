/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "./tests/tests.check" instead.
 */

#include <check.h>

#include "../quadratic_equation.h"


START_TEST(test_1)
{
    double a = 15.3;
    double b = 17.9;
    double c = 12.6;
    double d = discriminant(a, b, c);
    double result = count_root(a, b, d);
    ck_assert_double_eq_tol(1, result, 0.001);
    
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, test_1);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
