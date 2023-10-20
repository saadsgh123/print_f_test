#include "main.h"
/**
 * print_octal - prints an octal number.
 * @args: arguments.
 * @counter: count.
 * Return: counter.
 */
int print_octal(va_list args, int *counter)
{
	unsigned int n = va_arg(args, unsigned int);
	int octal_dig[32] = {0};
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		(*counter)++;
		return (*counter);
	}
	while (n > 0)
	{
		octal_dig[i] = n % 8;
		n /= 8;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(octal_dig[i] + '0');
		(*counter)++;
	}
	return (*counter);
}
