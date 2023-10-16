#include "main.h"
/**
 * print_decimal - prints decimal
 * @n: dec to print
 * Return: number of characters printed
 */
int print_decimal(int n)
{
	int num, l = n % 10, d;
	int  count = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (l < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		l = -l;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			d = num / exp;
			_putchar(d + '0');
			num = num - (d * exp);
			exp = exp / 10;
			count++;
		}
	}
	_putchar(l + '0');

	return (count);
}
