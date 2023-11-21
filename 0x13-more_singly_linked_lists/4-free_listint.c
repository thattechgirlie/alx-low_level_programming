#include "lists.h"
/**
 * free_listint - check the code
 * @head: check parameter
 * Return: returns value
 */
void free_listint(listint_t *head)
{
listint_t e;

while (head != NULL)
{
	e = head->next;
	free(head);
	head = e;
}
}
