#include "main.h"
/**
 * x_u_o_helper - Entry point
 * @format: format
 * @args: argument.
 * @counter: counter.
 * Return: Always 0
 */
int x_u_o_helper(const char *format, va_list args, int *counter)
{
	unsigned int value;

	switch (*format)
	{
		case 'x':
			value = va_arg(args, unsigned int);
			(*counter) += print_hex(value, 0);
			break;
		case 'X':
			value = va_arg(args, unsigned int);
			(*counter) += print_cap_hex(value, 0);
			break;
		case 'u':
			value = va_arg(args, int);
			(*counter) += print_uns(value);
			break;
		case 'o':
			value = va_arg(args, unsigned int);
			(*counter) += print_octal(value, 0);
			break;
	}
	return (0);
}
