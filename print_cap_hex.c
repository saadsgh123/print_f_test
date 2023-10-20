#include "main.h"
/**
 * print_cap_hex - prints an hexadecimal number in uppercase.
 * @args: arguments.
 * @counter: count.
 * Return: counter.
 */
int print_cap_hex(va_list args, int *counter)
{
	unsigned int n = va_arg(args, unsigned int);
	int hex_dig[16] = {0};
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		(*counter)++;
		return (*counter);
	}
	while (n > 0)
	{
		hex_dig[i] = n % 16;
		n /= 16;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		if (hex_dig[i] < 10)
		{
			_putchar(hex_dig[i] + '0');
		}
		else
		{
			_putchar(hex_dig[i] - 10 + 'A');
		}
		(*counter)++;
	}
	return (*counter);
}
