#include "main.h"

int  print_string(char *str)
{
        int counte = 0, i;
for (i = 0;str[i] != '\0';i++ )
        {
                _putchar(str[i]);
                counte++;
        }
return (0);
}
