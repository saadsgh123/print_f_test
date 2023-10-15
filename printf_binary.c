#include "main.h"
/**
 * printf_binary - prints a binary number.
 * @d: arguments.
 * Return: 1.
 */
int decimalTobinary(unsigned int d)
{
	int counter = 0;
	int quotient[32], j, i = 0;
	if (d == 0)
	{
        	_putchar('0');
        	return 1;
	
    	}
	while(d > 0)
	{
		quotient[i] = d % 2;
		d = d / 2;

		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar( quotient[j] + '0');
		counter ++;
	}
return counter;
}
