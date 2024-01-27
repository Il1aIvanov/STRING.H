#ifndef S21_STRING
#define S21_STRING

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

/* * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *                 SUB-LIBRARIES
 *
 * * * * * * * * * * * * * * * * * * * * * * * * */

// memchr, strchr, strpbrk, strrchr, strstr
#include "functions/s21_search.h"

// memcmp, strncmp;
#include "functions/s21_compare.h"

// memcpy, memset, strncpy;
#include "functions/s21_copy.h"

// strtok, strerror
#include "functions/s21_helpful.h"

// strlen, strcspn.
#include "functions/s21_count.h"

#endif
