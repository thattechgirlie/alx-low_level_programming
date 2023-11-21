#include "lists.h"
/**
 * delete_nodeint_at_index - check the code
 * @head: check parameter1
 * @index: check parameter2
 * Return: returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *e;
listint_t *c;
unsigned int y = 0;
e = *head;
c = NULL;

if (*head == NULL)
{
	return (-1);
}
if (index == 0)
{
	*head = (*head)->next;
	free(e);
	return (1);
}
while (y < index - 1)
{
	if (e != NULL || (e->next) != NULL)
	{
		return (-1);
	}
	e = e->next;
	y++;
}
c = e->next;
e->next = c->next;
free(c);
return (-1);
}
