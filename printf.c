#include "main.h"
/**
 * _printf - Entry point
 * @format: format
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int counter = 0, num;
	va_list args;
	char ch;
	unsigned int value;

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
			write(1, "%", 1);
			counter++;
		break;
		case 's':
			counter += print_string(args);
		break;
		case 'c':
			ch = (va_arg(args, int));
			write(1, &ch, 1);
			counter++;
		break;
		case 'd':
			num = va_arg(args, int);
			counter += print_decimal(num);
		break;
		case 'i':
			num = va_arg(args, int);
			counter += print_int(num);
		break;
		case 'b':
			value = va_arg(args, unsigned int);
			counter += decimalTobinary(value);
			break;
		default:
			write(1, "%", 1);
			write(1, format, 1);
			counter += 2;
			break;
		}
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
