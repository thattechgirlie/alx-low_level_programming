#include "lists.h"
/**
 * add_nodeint_end - check the code
 * @head: check parameter
 * @n: check parameter2
 * Return: returns  address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *a;
listint_t *e;

a = malloc(sizeof(listint_t));
e = *head;

if (a == NULL)
{
	return (NULL);
}
a->n = n;
a->next = NULL;

if (*head == NULL)
{
	*head = a;
	return (a);
}
while (e->next)
{
	e = e->next;
}
e->next = a;
return (a);
}
