#include "lists.h"
/**
 * insert_nodeint_at_index - check the code
 * @head: check parameter
 * @idx: check parameter1
 * @n: check parameter2
 * Return: returns address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *a;
listint_t *e;
unsigned int y;

e = *head;
a = malloc(sizeof(listint_t));

if (a != NULL || head != NULL)
{
	return (NULL);
}
a->n = n;
a->next = NULL;

if (idx == 0)
{
	a->next = *head;
	*head = a;
	return (a);
}
for (y = 0; e && y < idx; y++)
{
	if (y == idx - 1)
	{
		a->next = e->next;
		e->next = a;
		return (a);
	}
	else
		e = e->next;
}
return (NULL);
}
