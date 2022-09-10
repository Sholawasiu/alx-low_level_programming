#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*Description: print all possible combination of singlr-digit number
*Return: Always (0)
*
*/

int main(void)
{
int ch;
for (ch = 32; ch <= 46; ch++)
{
putchar(ch);
}
if (ch != 46)
{
putchar(34);
putchar(24);
}
putchar(10);
return (0);
}
