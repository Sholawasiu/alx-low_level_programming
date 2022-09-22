#include "main.h"
#include <string.h>

/**
* -strncat - function to append some char
* @dest: first parameter1
* @src: second  parameter2
* @n: 3rd parameter3
* Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
