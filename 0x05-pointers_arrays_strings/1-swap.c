#include "main.h"

/**
*A function that swap the values of 2 integers a and b
*@a: parameter one
*@b: parameter two
*/

void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
