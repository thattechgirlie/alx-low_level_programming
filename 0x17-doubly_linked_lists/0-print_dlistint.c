#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_dlistint - prints all elements
 * @h: head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int count = 0;

if (h == NULL)
	return (count);
while (h->prev != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	count++;
}
return (count);
}
