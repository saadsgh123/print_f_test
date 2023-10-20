#include "main.h"
/**
 * print_string - Entry point
 * @args: c.
 * @counter: counter.
 * Return: Always 0
 */

int print_string(va_list args, int *counter)
{
	char *str = va_arg(args, char *);

	if (!str)
	{
		write(1, "(null)", 6);
		(*counter) += 6;
		return (*counter);
	}
	else
	{
	while (*str)
	{
		write(1, str, 1);
		str++;
		(*counter)++;
	}
		va_end(args);
		return (1);
	}
}
