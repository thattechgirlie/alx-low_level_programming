#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - check the code
 * @head: check parameter
 * @str: check parameter1
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newelement;
size_t a, b = 0;
newelement = malloc(sizeof(list_t));

if (newelement == NULL)
	return (NULL);
newelement->str = strdup(str);

for (a = 0; str[a] != '\0'; a++)
	b++;
newelement->len = b;
newelement->next = *head;
*head = newelement;

return (*head);
}
