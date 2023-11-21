#include "lists.h"
/**
 * free_listint2 - check the code
 * @head: check parameter
 * Return: returns value
 */
void free_listint2(listint_t **head)
{
listint_t *e;

if (head == NULL)
	return;
while (*head != NULL)
{
	e = (*head)->next;
	free(*head);
	*head = e;
}
*head = NULL;
}
