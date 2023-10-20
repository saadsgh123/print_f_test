#include "main.h"
/**
 * _printf - Entry point
 * @format: format
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int i, handled;
	va_list args;
	is_match f[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_decimal}, {'i', print_int},
		{'b', decimalTobinary}, {'x', print_hex},
		{'X', print_cap_hex}, {'u', print_uns},
		{'o', print_octal}};
	va_start(args, format);
	if (!format)
		return (va_end(args), -1);
	while (*format)
	{
		if (*format == '%')
		{
		format++;
		if (*format == '\0')
			return (count);
		handled = 0;
		for (i = 0; i < 9; i++)
		{
			if (*format == f[i].spec)
			{
				f[i].func(args, &count);
				handled = 1;
				break;
			}
		}
		if (!handled)
		write(1, format, 1), count++;
	}
	else
		write(1, format, 1), count++;
		format++;
	}
	va_end(args);
	return (count);
}
