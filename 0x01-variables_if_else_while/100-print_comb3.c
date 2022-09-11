#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*Description: print all possible different combination of two digits
*Return: Always (0)
*
*/
int main(void)
{
int c = 1;
while (c <= 79)
{
putchar(c / 10 + '0');
putchar(c % 10 + '0');
if (c != 79)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
