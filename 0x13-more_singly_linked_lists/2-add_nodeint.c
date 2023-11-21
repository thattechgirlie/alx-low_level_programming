#include "lists.h"
/**
 * add_nodeint - check the code
 * @head: check parameter1
 * @n: check parameter2
 * Return: returns address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *a;
a = malloc(sizeof(listint_t));

if (a == NULL)
{
	return (NULL);
}
a->n = n;
a->next = *head;
*head = a;
return (a);
}
