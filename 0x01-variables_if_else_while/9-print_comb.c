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
int n;
for (n = 48; n <= 57; n++)

{putchar(n);
if (n != 57)
putchar(',');
putchar(' ');
putchar('\n');}
return (0);
}
