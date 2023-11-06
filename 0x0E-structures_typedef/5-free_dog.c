#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - check the code
 * @d: check the parameter
 * Return: returns void
 */
void free_dog(dog_t *d)
{
if (d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
}
