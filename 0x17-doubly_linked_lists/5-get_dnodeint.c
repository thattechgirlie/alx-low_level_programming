#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - code to check nth node
 * @head: head of node
 * @index: gives  usindex of node
 * Return: returns NULL if node doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *crr;
unsigned int a;
crr = head;
a = 0;

while (crr != NULL)
{
	if (a == index)
		return (crr);
	crr = crr->next;
	a++;
}
return (NULL);
}
