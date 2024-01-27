#include "test_me.h"

START_TEST(strerror_1) {
  for (int i = 0; i < 150; i++) {
    char *mass = s21_strerror(i);
    ck_assert_str_eq(strerror(i), mass);
    free(mass);
  }
}
END_TEST

START_TEST(strerror_2) {
  for (int i = -300; i < 0; i++) {
    char *mass = s21_strerror(i);
    ck_assert_str_eq(strerror(i), mass);
    free(mass);
  }
}
END_TEST

START_TEST(strerror_3) {
  for (int i = 151; i < 300; i++) {
    char *mass = s21_strerror(i);
    ck_assert_str_eq(strerror(i), mass);
    free(mass);
  }
}
END_TEST

Suite *test_strerror(void) {
  Suite *s = suite_create("\033[45m-=S21_STRERROR=-\033[0m");
  TCase *tc = tcase_create("strerror_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strerror_1);
  tcase_add_test(tc, strerror_2);
  tcase_add_test(tc, strerror_3);

  suite_add_tcase(s, tc);
  return s;
}