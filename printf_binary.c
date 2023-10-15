#include "main.h"
void decimalTobinary(unsigned int d)
{
	int quotient[32], i = 0;
    if (d == 0) {
        _putchar('0');
        return;
    }
    while (d > 0) {
        quotient[i] = d % 2;
        d = d / 2;

        i++;
    }
}
