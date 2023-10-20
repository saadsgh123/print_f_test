#include "main.h"
/**
 * decimalTobinary - Entry point
 * @d: format
 * Return: Always 0
 */
int decimalTobinary(va_list args, int *counter)
{
	int d = va_arg(args, unsigned int), j, quotient[32], i = 0;


	if (d == 0)
	{
		_putchar('0');
		return (1);
	}
	while (d > 0)
	{
		quotient[i] = d % 2;
		d = d / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(quotient[j] + '0');
		(*counter)++;
	}
	return (1);
}
