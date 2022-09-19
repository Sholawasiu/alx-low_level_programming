#include "main.h"

/**
*_puts - printing a string to stdout
*@str: return s
*/ 

void _puts(char *str)
{
for (*str != '\0'; str++)
{
_putchar(*str);
}
 _putchar('\n');
}
