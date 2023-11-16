#include "lists.h"
#include <stdlib.h>
/**
 * free_list - check the code
 * @head: check parameter
 * Return: returns value
 */
void free_list(list_t *head)
{
if (head)
{
	free_list(head->next);
	if (head->str)
		free(head->str);
	free(head);
}
}
