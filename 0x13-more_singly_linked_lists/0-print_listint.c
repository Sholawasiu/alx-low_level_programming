#include "lists.h"

/**
*print_listint - print all the elements of a list
*@h: header of the lists
*Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
newnode = 0;
while (h != NULL)
{
printf("%d", h->n);
h=h->next
newnode++;
}
return newnode;
}
