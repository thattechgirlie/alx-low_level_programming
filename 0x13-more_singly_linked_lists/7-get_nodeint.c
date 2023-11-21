#include "lists.h"
/**
 * get_nodeint_at_index - check the code
 * @head: check parameter1
 * @index: check parameter2
 * Return: returns NULL if code does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int c;
listint_t *e = head;

if (e && c < index)
{
	e = e->next;
	c++;
}
else
{
	return (NULL);
}
}
