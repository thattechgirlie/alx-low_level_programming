#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - gives us total of data
 * @head: head of node
 * 
 */
int sum_dlistint(dlistint_t *head)
{
int total = 0;
dlistint_t *a;

for (a = head; a != NULL; a = a->next)
	total += a->n;
return (total);
}
