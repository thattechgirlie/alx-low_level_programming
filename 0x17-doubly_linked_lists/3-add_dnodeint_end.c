#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the end
 * @head: head of node
 * @n: gives us what to add
 * Return: returns new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *n_node;
n_node = malloc(sizeof(dlistint_t));

if (n_node == NULL)
	return (NULL);

n_node->n = n;
n_node->next = NULL;

if (*head == NULL)
{
	n_node->prev = NULL;
	*head = n_node;
	return (n_node);
}
while ((*head)->next != NULL)
	*head = (*head)->next;
(*head)->next = n_node;
n_node->prev = *head;
return (n_node);
}
