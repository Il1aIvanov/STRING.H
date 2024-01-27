#ifndef S21_COPY_H
#define S21_COPY_H

/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *                 COPY FUNCTIONS
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// Копирует n символов из src в dest.
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
// Копирует символ c (беззнаковый тип) в первые n символов строки, на которую
// указывает аргумент str.
void *s21_memset(void *str, int c, s21_size_t n);
// Копирует до n символов из строки, на которую указывает src, в dest.
char *s21_strncpy(char *dest, const char *src, s21_size_t n);

#endif  // S21_COPY_H
