#include "main.h"
/**
 * print_format - Entry point
 * @format: format
 * @counter: counter.
 * Return: Always 0
 */
void print_format(char format, int *counter)
{
	write(1, &format, 1);
	(*counter)++;
}
