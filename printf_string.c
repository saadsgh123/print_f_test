#include "main.h"
/**
 * print_string - Returns the lenght of a string.
 * @str: Type char pointer
 * Return: c.
 */
int  print_string(const char *str)
{
	int i ,counter = 0;
	if (str != NULL)
       	{
        for (i = 0; str[i] != '\0'; i++) {
            putchar(str[i]);
        }
   	}
       	else {
        	str = "(null)";
    }
	return counter++;
}

