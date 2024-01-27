#include "s21_common.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
  const char *line = (const char *)str;
  void *memchr_res = S21_NULL;
  for (s21_size_t i = 0; i < n; i++)
    if (line[i] == c) {
      memchr_res = (void *)&line[i];
      break;
    }

  return memchr_res;
}

char *s21_strchr(const char *str, int c) {
  char *strchr_res = S21_NULL;
  for (s21_size_t i = 0; i < s21_strlen(str) + 1; i++)
    if (str[i] == c) {
      strchr_res = (char *)&str[i];
      break;
    }

  return strchr_res;
}

char *s21_strpbrk(const char *str1, const char *str2) {
  char *strpbrk_res = S21_NULL;
  for (s21_size_t i = 0; i < s21_strlen(str1); i++) {
    int found = 0;
    for (s21_size_t j = 0; j < s21_strlen(str2); j++)
      if (str1[i] == str2[j]) {
        strpbrk_res = (char *)&str1[i];
        found = 1;
        break;
      }
    if (found) break;
  }

  return strpbrk_res;
}

char *s21_strrchr(const char *str, int c) {
  char *strrchr_res = S21_NULL;
  for (s21_size_t i = 0; i < s21_strlen(str) + 1; i++)
    if (str[i] == c) strrchr_res = (char *)&str[i];

  return strrchr_res;
}

char *s21_strstr(const char *haystack, const char *needle) {
  char *strstr_res = S21_NULL;
  for (s21_size_t i = 0; i < s21_strlen(haystack) + 1; i++) {
    int found = 1;
    for (s21_size_t j = 0; j < s21_strlen(needle); j++)
      if (haystack[i + j] != needle[j]) {
        found = 0;
        break;
      }
    if (found) {
      strstr_res = (char *)&haystack[i];
      break;
    }
  }
  return strstr_res;
}