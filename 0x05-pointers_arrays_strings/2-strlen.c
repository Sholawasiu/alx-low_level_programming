#include "main.h"

/**
*strlen - function to return th lenght of string
*Return: lenght
*/

int _strlen(char *s)
{
int lenght = 0;
while (*(s + lenght) != '\0')
lenght++;
return (lenght);
}
