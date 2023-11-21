#include "lists.h"
/**
 * reverse_listint - check main code
 * @head: check parameter
 * Return : returns pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *next;
listint_t *m;
m = NULL;
next = NULL;

while (*head)
{
	next = (*head)->next;
	(*head)->next = m;
	m = *head;
	*head = next;
}
*head = m;
return (*head);
}
