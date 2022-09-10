#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*description: assign a random number to variable n each time it is executed
*print the last digit of the number stored in the variable n
*
*/


int main(void)

{
int ch;


for (ch = 'a'; ch <= 'z'; ch++)

if (ch != 'q' && ch != 'e')

{
putchar(ch);
}
putchar(10); /*ascii code for new line*/
return (0);
}
