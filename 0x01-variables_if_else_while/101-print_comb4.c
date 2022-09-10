#include <stdio.h>

/**
*main - Entry point
*Desciption: print all possible different combination of three digit number
*Return: Always (0)
*
*/

int main(void)

{
int m, n, o;
for (m = 48; m < 58; m++)
for  (n = 49; n < 58; n++)
for (o = 50; o < 58; o++)

if (o > n && n > o)

putchar(m);
putchar(n);
putchar(o);

if (m != 55 || n =56)

putchar(',');
putchar(' ');

putchar(\n);
return (0);
}
