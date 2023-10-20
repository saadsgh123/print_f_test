#include "main.h"
/**
 * print_char - prints a char.
 * @args: arguments.
 * @counter: counter.
 * Return: 1.
 */
int print_char(va_list args, int *counter)
{
	char c;

	c = va_arg(args, int);

	(*counter)++;
	_putchar(c);
	return (1);
}
