#include "main.h"

/**
*_strlen - function to return th lenght of string
*@s: return string lenght
*Return: lenght
*/

int _strlen(char *s)
{
int lenght = 0;
while (*(s + lenght) != '\0')
lenght++;
return (lenght);
}
