#ifndef S21_COMPARE_H
#define S21_COMPARE_H

/* * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *                 COMPARE FUNCTIONS
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// Сравнивает первые n байтов str1 и str2
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
// Сравнивает не более первых n байтов str1 и str2
int s21_strncmp(const char *str1, const char *str2, s21_size_t n);

#endif  // S21_COMPARE_H
