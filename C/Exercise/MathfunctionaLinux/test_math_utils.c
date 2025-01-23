#include <check.h>
#include "math_utils.h"

START_TEST(test_sum) {
    ck_assert_int_eq(sum(2, 3), 5);
    ck_assert_int_eq(sum(-1, 1), 0);
    ck_assert_int_eq(sum(10, 4), 14);
}
END_TEST

START_TEST(test_subtract) {
    ck_assert_int_eq(subtract(5, 3), 2);
    ck_assert_int_eq(subtract(0, 1), -1);
}
END_TEST

START_TEST(test_mult) {
    ck_assert_int_eq(mult(5, 3), 15);
    ck_assert_int_eq(mult(0, 1), 0);
}
END_TEST

START_TEST(test_div) {
    ck_assert_int_eq(div(10, 2.5), 4);
    ck_assert_int_eq(div(20, 10), 2);
}
END_TEST

START_TEST(test_quadrato) {
    ck_assert_int_eq(quadrato(10), 100);
    ck_assert_int_eq(quadrato(6),36 );
}
END_TEST

Suite *math_utils_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("MathUtils");

    /* Core test case */
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_sum);
    tcase_add_test(tc_core, test_subtract);
    tcase_add_test(tc_core, test_mult);
    tcase_add_test(tc_core, test_div);
    tcase_add_test(tc_core, test_quadrato);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void) {
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = math_utils_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? 0 : 1;
}
