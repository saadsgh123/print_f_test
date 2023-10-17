#include "main.h"
/**
 * print_uns - print unsigned numbers.
 * @n: format
 * Return: count.
 */
int print_uns(unsigned int n)
{
	unsigned int num, d, e = 1;
	int  count = 1, l = n % 10;

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
