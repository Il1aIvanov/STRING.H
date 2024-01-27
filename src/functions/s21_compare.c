#include "s21_common.h"

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  int res = 0;
  unsigned char *p1 = (unsigned char *)str1;
  unsigned char *p2 = (unsigned char *)str2;
  for (s21_size_t i = 0; i < n; i++) {
    if (p1[i] != p2[i]) {
      res = p1[i] - p2[i];
      break;
    }
  }
  return res;
}

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int res = 0;
  unsigned char *p1 = (unsigned char *)str1;
  unsigned char *p2 = (unsigned char *)str2;
  for (s21_size_t i = 0; i < n; i++) {
    // '\0' symbol stop comparing
    if (p1[i] != p2[i] || p1[i] == '\0' || p2[i] == '\0') {
      res = p1[i] - p2[i];
      break;
    }
  }
  return res;
}