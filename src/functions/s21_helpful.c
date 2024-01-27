#include <stdio.h>
#include <string.h>

#include "s21_common.h"
#include "s21_errno.h"

char *s21_strerror(int errnum) {
  const char **error_messages = s21_get_error_messages();
  s21_size_t num_errors = s21_get_num_errors();
  char *error_found = (char *)malloc(1000);
  for (s21_size_t i = 0; i < num_errors; i++) {
    if ((s21_size_t)errnum == i - 300) strcpy(error_found, error_messages[i]);
  }
  if (strlen(error_found) == 0) strcpy(error_found, "Unknown error");
  return error_found;
}

char *s21_strtok(char *str, const char *delim) {
  if (delim == S21_NULL || (delim != S21_NULL && strlen(delim) == 0 &&
                            delim[0] == '\0' && str == S21_NULL))
    return S21_NULL;

  static char *next_token = S21_NULL;

  if (str != S21_NULL) {
    next_token = str;
  }

  if (next_token == S21_NULL || *next_token == '\0') {
    return S21_NULL;
  }

  while (*next_token != '\0' && strchr(delim, *next_token) != S21_NULL) {
    next_token++;
  }

  if (*next_token == '\0') {
    return S21_NULL;
  }

  char *token_start = next_token;

  while (*next_token != '\0' && strchr(delim, *next_token) == S21_NULL) {
    next_token++;
  }

  if (*next_token != '\0') {
    *next_token = '\0';
    next_token++;
  }
  return token_start;
}

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  char *dest_ptr = dest;

  while (*dest_ptr != '\0') {
    dest_ptr++;
  }

  while (*src != '\0' && n > 0) {
    *dest_ptr = *src;
    dest_ptr++;
    src++;
    n--;
  }

  *dest_ptr = '\0';

  return dest;
}