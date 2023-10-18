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
	switch (get_spec(*format))
	{
		case TYPE_1:
			string_helper(format, args, counter);
			break;
		case TYPE_2:
			decimal_helper(format, args, counter);
			break;
		case TYPE_3:
			hexdeci_helper(format, args, counter);
			break;
		default:
			write(1, "%", 1);
			write(1, format, 1);
			(*counter) += 2;
			break;
		}
		return (0);
}
