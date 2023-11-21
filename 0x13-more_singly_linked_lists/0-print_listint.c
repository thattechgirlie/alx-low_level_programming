#include "lists.h"
#include <string.h>
/**
 * print_listint - check the code
 * @h: check the parameter
 * Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t a;
a = 0;

while (h)
{
	printf("%d\n", h->n);
	a++;
	h = h->next;
}
return (a);
}
