#include "main.h"
#include <stdio.h>

/**
**malloc_checked - allocate memory using malloc
*
*@b: byte allocated
*Return: pointer
*/

void *malloc_checked(unsigned int b)
{
char *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
