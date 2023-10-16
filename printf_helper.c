#include "main.h"
/**
 * printf_helper - Entry point
 * @format: format
 * @args: arguments
 * @counter: counter.
 * Return: Always 0
 */
int printf_helper(const char *format, va_list args, int *counter)
{
	char ch;
	unsigned int value;
	int num;

	switch (*format)
	{
		case '%':
			write(1, "%", 1);
			(*counter)++;
			break;
		case 's':
			(*counter) += print_string(args);
			break;
		case 'c':
			ch = (va_arg(args, int));
			write(1, &ch, 1);
			(*counter)++;
			break;
		case 'd':
			num = va_arg(args, int);
			print_decimal(num);
			break;
		case 'i':
			num = va_arg(args, int);
			(*counter) += print_int(num);
			break;
		case 'b':
			value = va_arg(args, unsigned int);
			(*counter) += decimalTobinary(value);
			break;
		default:
			write(1, "%", 1);
			write(1, format, 1);
			(*counter) += 2;
			break;
		}
		return (0);
}
