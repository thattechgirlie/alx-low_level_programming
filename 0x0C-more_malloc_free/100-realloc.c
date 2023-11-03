#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _realloc - check code
 * @ptr: check parameter1
 * @old_size: check parameter2
 * @new_size: check parameter3
 * Return: returns void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a, *b;
unsigned int k, l;
k = new_size;
l = new_size;
b = ptr;

if (ptr == NULL)
{
	a = malloc(new_size);
	return (a);
}
else if (new_size == 0)
{
	free(ptr);
	return (NULL);
}
else if (new_size == old_size)
	return (ptr);
a = malloc(new_size);

if (a == NULL)
	return (NULL);
if (new_size > old_size)
	l = old_size;
for (k = 0; k < l; k++)
	a[k] = b[k];
free(ptr);
return (a);
}
