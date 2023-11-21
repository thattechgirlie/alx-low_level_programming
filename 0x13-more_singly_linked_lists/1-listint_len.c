#include "lists.h"
/**
 * listint_len - check the code
 * @h: check parameter
 * Return: returns number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t a;
a = 0;

while (h != NULL)
{
	a++;
	h = h->next;
}
return (a);
}

