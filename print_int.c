#include "main.h"
/**
 * print_int - Entry point
 * @n: format
 * Return: Always 0
 */
int print_int(int n)
{
	int num, l = n % 10, d, e = 1;
	int  count = 1;

	n = n / 10;
	num = n;

	if (l < 0)
	{
		_putcharForInt('-');
		num = -num;
		n = -n;
		l = -l;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			e = e * 10;
			num = num / 10;
		}
			num = n;
		while (e > 0)
		{
			d = num / e;
			_putcharForInt(d + '0');
			num = num - (d * e);
			e = e / 10;
			count++;
	}
	}
	_putcharForInt(l + '0');

	return (count);
}
