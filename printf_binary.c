#include "main.h"
/**
 * printf_binary - prints a binary number.
 * @d: arguments.
 * Return: 1.
 */
void decimalTobinary(unsigned int d)
{
	int quotient[32], j;
	if (d == 0)
	{
        	_putchar('0');
        	return;
    	}
	int i = 0;
	while(d > 0)
	{
		quotient[i] = d % 2;
		d = d / 2;

		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar( quotient[j] + '0');
	}
}
