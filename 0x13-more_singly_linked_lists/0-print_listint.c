#include "lists.h"

/**
*print_listint - print all the elements of a list
*@h: header of the lists
*Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
listint_t *newnode, *temp;
int count;
if (h == 0)
{
h = newnode;
}
else
{
h = temp = newnode;
temp->next = newnode;
}
while (temp->next != 0)
{
printf("%d", listint_t->data);
count++;
}
return (count);
}
