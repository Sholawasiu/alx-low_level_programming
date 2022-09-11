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
int c = 0;
while (c <= 99)
{
putchar(c / 10 + '0');
putchar(c % 10 + '0');
if (c != 99)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
