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
char ch;
int n;
for (n = 28; n <= 37; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
