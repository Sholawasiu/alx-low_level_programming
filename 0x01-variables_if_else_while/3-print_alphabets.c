#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*Description: print alphabet in lowercase and then in upper case
*Return: Always (0) success
*
*/

int main(void)

{
int ch;

for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
