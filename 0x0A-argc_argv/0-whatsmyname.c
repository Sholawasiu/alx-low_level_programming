#include <stdio.h>

/**
*main - write its name follow by a new line
*@argv: arg count
*@argc: array of pointers to CLI arg
*Return: Always (0)
*/

int main(int argc, char *argv[]) 
{  
printf("%s\n", argv[argc - 1]);  
return (0); 
}
