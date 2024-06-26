#include <check.h>
#include <stdlib.h>
#include "../src/lib/s21_string.h"

START_TEST(s21_memchr_test)
{
    char *str = "Hello, world!";

    ck_assert_ptr_eq(s21_memchr(str, 'o', 7), memchr(str, 'o', 7));
    ck_assert_ptr_eq(s21_memchr(str, 'w', 5), memchr(str, 'w', 5));
}
END_TEST

int main(void)
{
    int number_failed;
    Suite *suite = suite_create("s21_memchr");
    TCase *tcase = tcase_create("s21_memchr");

    tcase_add_test(tcase, s21_memchr_test);
    suite_add_tcase(suite, tcase);

    SRunner *srunner = srunner_create(suite);

    srunner_run_all(srunner, CK_VERBOSE);
    number_failed = srunner_ntests_failed(srunner);
    srunner_free(srunner);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
