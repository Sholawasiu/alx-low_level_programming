#include<main.h>

/**
*main - Entry point
*@s: arg
*Return: Always success
*/

void _puts_recursion(char *s)
{
if(*s != '\0')
{
_putchar(*s);
_puts_recursion(s+1);
}
else
_putchar('\n');
}
