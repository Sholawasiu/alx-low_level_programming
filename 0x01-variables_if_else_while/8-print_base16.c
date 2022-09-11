#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*Description: print all the number of base 16 in lower case
*Return: Always (0)
*
*/

int main(void)
{
char y;
int x;
for (x = 48; x <= 57; x++)
{
putchar(x);
}
for (y = 'a'; y <= 'f'; y++)
{
putchar(y);
}
putchar(10);
return (0);
}
