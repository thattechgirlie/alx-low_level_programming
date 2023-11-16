#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - check the code
 * @h: check parameter
 * Return: returns number of nodes
 */
size_t print_list(const list_t *h)
{
size_t elements;
elements = 0;

while (h != NULL)
{
	if (h->str == NULL)
	{
		printf("[%d] %s\n", 0, "(nil)");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	h = h->next;
	elements++;
}
return (elements);
}
