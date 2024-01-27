#ifndef S21_COUNT_H
#define S21_COUNT_H

/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *                 COUNT FUNCTIONS
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// Вычисляет длину строки str, не включая завершающий нулевой символ.
s21_size_t s21_strlen(const char *str);
// Вычисляет длину начального сегмента str1, который полностью состоит из
// символов, не входящих в str2.
s21_size_t s21_strcspn(const char *str1, const char *str2);

#endif  // S21_COUNT_H
