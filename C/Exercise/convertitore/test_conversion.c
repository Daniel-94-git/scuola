#include <check.h>
#include "conversion.h"

START_TEST(test_celsiusTOfarenith) {
    ck_assert_int_eq(celsiusTOfarenith(50), 122);
    ck_assert_int_eq(celsiusTOfarenith(10), 50);
    
}
END_TEST

START_TEST(test_farenithTOcelsius) {
    ck_assert_int_eq(farenithTOcelsius(50), 10);
    ck_assert_int_eq(farenithTOcelsius(122), 50);
}
END_TEST

START_TEST(test_euroTOdollaro) {
    ck_assert_int_eq(euroTOdollaro(100), 104);
    ck_assert_int_eq(euroTOdollaro(125.50), 130.52);
}
END_TEST

START_TEST(test_dollaroTOeuro) {
    ck_assert_int_eq(dollaroTOeuro(104), 100);
    ck_assert_int_eq(dollaroTOeuro(130.52), 125.50);
}
END_TEST



Suite *conversion_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("conversion");

    /* Core test case */
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core,test_celsiusTOfarenith);
    tcase_add_test(tc_core,test_farenithTOcelsius);
    tcase_add_test(tc_core,test_euroTOdollaro);
    tcase_add_test(tc_core,test_dollaroTOeuro);
    
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void) {
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = conversion_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? 0 : 1;
}
