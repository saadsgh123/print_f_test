#include "main.h"
/**
 * printf_binary - prints a binary number.
 * @d: arguments.
 * Return: 1.
 */
void decimalTobinary(unsigned int d)
{
	if ( d> 1) {
        decimalTobinary(d / 2);
    }
    putchar('0' + (d % 2));
}
