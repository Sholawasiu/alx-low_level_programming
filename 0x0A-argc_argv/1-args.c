#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the number of argument pass into it
*@argc: arg count
*@argv: array of pointer to CLI arg
*Return: 0
*/

int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
