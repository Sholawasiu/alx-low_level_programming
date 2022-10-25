#include "lists.h"

/**
*print_listint - print all the elements of a list
*@h: header of the lists
*Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{  
size_t newnode;  
newnode = 0;  
while (h != NULL)    
{      
if (h->str == NULL)	
printf("[%d] %s\n", 0, "(nil)");      
else	
printf("[%d] %s\n", h->len, h->str);      
h = h->next;      
newnode++;      
}  
return (newnode); 
}
