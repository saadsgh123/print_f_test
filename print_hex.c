#include "main.h"
/**
 * print_hex - prints an hexadecimal number.
 * @n: arguments.
 * @count: count.
 * Return: counter.
 */
int print_hex(unsigned int n, int count)
{
	unsigned int curr_div = n;

	int temp;

	if (n / 16 != 0)
	{
		temp = n / 16;
		curr_div = n - (temp * 16);
		print_hex(temp, count + 1);
	}

	if (curr_div > 9)
		curr_div = curr_div + 39;
		_putcharForInt(curr_div + '0');
	return (count);
}
