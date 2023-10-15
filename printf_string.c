#include "main.h"
int print_string(char *str)
{
    unsigned int i;

    for  (i = 0 ;str[i];i++)
    {
        _putchar(str[i]);

    }
    return (i);
}
