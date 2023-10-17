#include "main.h"
/**
 * d_i_b_help - Entry point
 * @format: format
 * @args: argument.
 * @counter: counter.
 * Return: Always 0
 */
int function2(const char *format, va_list args, int *counter)
{
	int value;
	int num;

	switch (*format)
	{
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
	}
	return (0);
}
