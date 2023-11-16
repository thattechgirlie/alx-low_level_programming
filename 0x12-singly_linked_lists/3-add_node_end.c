#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - check the code
 * @head: check parameter
 * @str: check parameter1
 * Return: number of node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newelement, *tmp;
size_t a, b = 0;
newelement = malloc(sizeof(list_t));

if (newelement == NULL)
	return (NULL);
for (a = 0; str[a] != '\0'; a++)
	b++;
newelement->len = b;
newelement->next = NULL;
tmp = *head;

if (tmp == NULL)
{
	*head = newelement;
}
else
{
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newelement;
}
return (*head);
}

