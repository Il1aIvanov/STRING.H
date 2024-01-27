#include "s21_common.h"
#include "s21_search.h"

s21_size_t s21_strlen(const char *str) {
  return (*str) ? s21_strlen(++str) + 1 : 0;
}

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  const char *p;

  for (p = str1; *p != '\0'; ++p) {
    if (s21_strchr(str2, *p)) break;
  }
  return p - str1;
}