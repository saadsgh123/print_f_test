#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <limits.h>
#include "stdarg.h"

typedef struct format_helper {
    char spec;
    int (*func)();
} is_match;

void print_format(char format, int *counter);
int print_int(va_list args, int *counter);
int _printf(const char *format, ...);
int print_string(va_list args, int *counter);
int _putchar(char c);
int print_hex(va_list args, int *count);
int print_cap_hex(va_list args, int *counter);
int print_octal(va_list args, int *counter);
int print_uns(va_list args, int *counter);
int print_char(va_list args, int *counter);
int decimalTobinary(va_list args, int *counter);
int print_decimal(va_list args, int *counter);
#endif
