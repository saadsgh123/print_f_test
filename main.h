#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <limits.h>
#include "stdarg.h"

int print_int(int n);
int print_string(va_list args);
int _printf(const char *f, ...);
int print_string(va_list args);
int _putchar(char c, int *count);
int print_decimal(int n);
int decimalTobinary(unsigned int d);
int printf_helper(const char *format, va_list args, int *counter);
int _putcharForInt(char c);
int print_hex(unsigned int num, int count);
int print_cap_hex(unsigned int num, int count);
int print_octal(unsigned int n,  int count);
int print_uns(unsigned int n);
int function1(const char *format, va_list args, int *counter);
int function2(const char *format, va_list args, int *counter);
int function3(const char *format, va_list args, int *counter);

#endif
