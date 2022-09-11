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
while (c <= 89)
{
putchar(c / 10 + '1');
putchar(c % 10 + '1');
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
