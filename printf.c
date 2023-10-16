#include "main.h"
/**
 * _printf - Entry point
 * @format: format
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list args;

	va_start(args, format);
	if (!format)
		return (-1);
	while (*format)
	{
	if (*format == '%')
	{
		format++;
		if (*format == '\0')
			return (-1);
	printf_helper(format, args, &counter);
	}
	else
	{
		write(1, format, 1);
		counter++;
	}
		format++;
	}
	va_end(args);
	return (counter);
}
