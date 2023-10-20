#include "main.h"
/**
 * _putchar - Entry point
 * @c: c
 * @count: count
 * Return: Always 0
 */
int _putchar(char c, int *count)
{
	(*count)++;
	return (write(1, &c, 1));
}

/**
 * _putcharForInt - Entry point
 * @c: c
 * Return: Always 0
 */
int _putcharForInt(char c)
{
	return (write(1, &c, 1));
}
