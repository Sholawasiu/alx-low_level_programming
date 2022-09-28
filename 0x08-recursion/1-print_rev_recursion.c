#include "main.h"
/**
*_print_rev_recursion - a function that print string in reverse
*@s: argumemt
*Return: Always success
*/

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}