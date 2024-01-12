#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds new node at beginning
 * *head: head of node
 * Return: returns new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *n_node;
n_node = malloc(sizeof(dlistint_t));

if (n_node == NULL)
	return (NULL);

n_node->n = n;
n_node->next = *head;
n_node->prev = NULL;

if (*head != NULL)
	(*head)->prev = n_node;
*head = n_node;
return (n_node);
}
