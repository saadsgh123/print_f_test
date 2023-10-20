#include "main.h"
/**
 * print_string - Entry point
 * @args: c
 * Return: Always 0
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);

	int count = 0;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}
	va_end(args);
	return (count);
	}
}
