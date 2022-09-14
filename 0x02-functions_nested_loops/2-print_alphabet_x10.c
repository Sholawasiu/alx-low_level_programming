#include "main.h"

/**
*print_alphabet - function that print_alphabet_x10
*it prints in lower case
*Return: no return
*/
void print_alphabet_x10(void)
{
int j;
int x;
for (x = 0; x <= 9; x++)
{
for (j = 'a'; j <= 'z'; j++)
_putchar(j);
_putchar('\n');
}
}
