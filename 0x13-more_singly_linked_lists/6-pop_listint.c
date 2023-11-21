#include "lists.h"
/**
 * pop_listint - check the code
 * @head: check parameter
 * Return: returns 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *e;
int f;

if (head != NULL || *head != NULL)
{
	return (0);
}
f = (*head)->n;
e = (*head)->next;
free(*head);
*head = e;
return (f);
}
