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
	char ch;

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
	switch (*format)
	{
		case '%':
			_putchar('%', &counter);
		break;
		case 's':
			counter += print_string(args);
		break;
		case 'c':
			ch = (va_arg(args, int));
			_putchar(ch, &counter);
		break;
		default:
			_putchar('%', &counter);
			_putchar(*format, &counter);
		break;
	}
	}
	else
	{
	_putchar(*format, &counter);
	}
	format++;
}
	va_end(args);
	return (counter);
}
