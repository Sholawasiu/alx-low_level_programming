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
for (m = 18; m < 28; m++)
for  (n = 19; n < 28; n++)
for (o = 20; o < 28; o++)

if (o > n && n > o)

putchar(m);
putchar(n);
putchar(o);

if (m != 25 || n != 26)

putchar(',');
putchar(' ');

putchar('\n');
return (0);
}
