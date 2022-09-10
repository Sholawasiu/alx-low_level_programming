#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*Description: print the lowercase alphabet in reverse
*Return: Always (0)
*
*/
int main(void)

{
int ch;
 for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar(10);
return (0);
}
