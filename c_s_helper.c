#include "main.h"
/**
 * c_s_helper - Entry point
 * @format: format
 * @args: argument.
 * @counter: counter.
 * Return: Always 0
 */
int c_s_helper(const char *format, va_list args, int *counter)
{
	char ch;

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
	}
	return (0);
}
