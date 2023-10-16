#include "main.h"
/**
 * decimalTobinary - Entry point
 * @d: format
 * Return: Always 0
 */
int decimalTobinary(unsigned int d)
{
int counter = 0, j, quotient[32], i = 0;

	if (d == 0)
	{
		_putcharForInt('0');
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
		_putcharForInt(quotient[j] + '0');
		counter++;
	}
	return (counter);
}
