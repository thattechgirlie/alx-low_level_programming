#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - check the code
 * @h: head of node
 * @idx: index of node
 * @n: value of integer
 * Return: returns adress of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = *h, *new;
if (idx == 0)
	return (add_dnodeint(h, n));
for (
