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
if (nmemb == 0 || size == 0)
	return (NULL);

void *ptr(malloc(nmemb * size))

if (ptr == NULL)
	return (NULL);
memset(ptr, 0, nmemb * size);
return (ptr);
}
