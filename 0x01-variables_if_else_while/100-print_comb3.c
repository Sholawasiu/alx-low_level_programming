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
int ch;
int n;
for (ch = 28; ch <= 37; ch++)
for (n = 29; n <= 37; n++)

if (n > ch)
{
putchar(ch);
putchar(n);
}
if (ch != 26 || n != 27)
{
putchar(14);
putchar(12);
}
putchar(10);
return (0);
}
