#include "main.h"
/**
*main - Entry point
*Description: checking for alphabetic character
*Return: 0 or 1
*
*/

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
