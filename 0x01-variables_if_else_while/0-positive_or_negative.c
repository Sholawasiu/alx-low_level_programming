#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* description - and print the last digit of the number stored in the variable n
* Return: Always (0)
*
*/

int main(void)
{
int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}

if (n < 0)

{
printf("%d is negative\n", n);
}
return (0);
}
