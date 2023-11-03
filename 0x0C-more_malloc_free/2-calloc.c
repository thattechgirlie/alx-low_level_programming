#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _calloc - check the code
 * @size: check parameter1
 * @nmemb: check parameter2
 * Return: returns NULL if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *d;
unsigned int u;

if (nmemb == 0 || size == 0)
	return (NULL);

d = malloc(nmemb * size);

if (d == NULL)
	return (NULL);
for (u = 0; u < (nmemb * size); u++)
	d[u] = 0;
return (d);
}
