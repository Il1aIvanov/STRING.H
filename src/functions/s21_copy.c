#include "s21_common.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  if (dest == S21_NULL) return S21_NULL;
  char *dest_char = (char *)dest;
  const char *src_char = (const char *)src;
  for (s21_size_t i = 0; i < n; i++) {
    dest_char[i] = src_char[i];
  }
  return dest;
}

void *s21_memset(void *str, int c, s21_size_t n) {
  char *str_char = (char *)str;
  for (s21_size_t i = 0; i < n; i++) {
    str_char[i] = (unsigned char)c;
  }
  return str;
}

char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  if (dest == S21_NULL || src == S21_NULL || n == 0) return dest;
  for (s21_size_t i = 0; i < n && src[i] != '\0'; i++) {
    dest[i] = src[i];
  }
  return dest;
}