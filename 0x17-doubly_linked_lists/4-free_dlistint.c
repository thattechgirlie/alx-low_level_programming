#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees list
 * @head: this is the head of node
 *
 */
void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
	dlistint_t *next = head->next;
	free(head);
	head = next;
}
}
