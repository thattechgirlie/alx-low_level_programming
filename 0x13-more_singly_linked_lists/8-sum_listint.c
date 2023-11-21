#include "lists.h"
/**
 * sum_listint - check the code
 * @head: check parameter
 * Return: returns 0 if list is empty
 */
int sum_listint(listint_t *head)
{
listint_t *e;
int b;

e = head;
b = 0;

while (e)
{
	b += e->n;
	e = e->next;
}
return (b);
}
