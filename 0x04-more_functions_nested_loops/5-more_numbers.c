#include "main.h"

/**
* printing more numbers of 0 to 14 10x
*/

void more_numbers(void);
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 15; y++)
{
if (y >= 10)
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}
