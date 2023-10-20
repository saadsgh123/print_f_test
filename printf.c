#include "main.h"
/**
 * _printf - Entry point
 * @format: format
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int counter = 0, i;

	is_match f[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_decimal}, {'i', print_int},
		{'b', decimalTobinary}, {'x', print_hex},
		{'X', print_cap_hex}, {'u', print_uns}, {'o', print_octal}
	};
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
	if (*format == '%')
	{
		format++;
		if (*format == '\0')
			return (-1);
		for (i = 0; i < 9; i++)
		{
			if (*format == f[i].spec)
			{
				f[i].func(args, &counter);
			}
		}
		if (*format == '%')
		{
			print_format(*format, &counter);
		}
	}
	else
	{
		print_format(*format, &counter);
	}
		format++;
	}
	va_end(args);
	return (counter);
}
