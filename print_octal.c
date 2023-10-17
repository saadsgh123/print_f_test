#include "main.h"
/**
 * print_octal - prints an octal number.
 * @n: arguments.
 * @count: count.
 * Return: counter.
 */
int print_octal(unsigned int n, int count)
{
	unsigned int curr_div = n;

	int temp;

	if (n / 8 != 0)
	{
		temp = n / 8;
		curr_div = n - (temp * 8);
		print_octal(temp, count + 1);
	}

	_putcharForInt(curr_div + '0');

	return (count);
}
