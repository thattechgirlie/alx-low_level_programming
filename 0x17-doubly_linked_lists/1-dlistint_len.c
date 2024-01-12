#include "lists.h"
/**
 * dlistint_len - return number of elements
 * @h: head
 * Return: returns no of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;

if (h == NULL)
	return (count);
while (h != NULL)
{
	count++;
	h = h->next;
}
return (count);
}
