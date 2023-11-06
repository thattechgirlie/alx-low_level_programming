#include "dog.h"
#include <stdio.h>
/**
 * print_dog - check the code
 * @d: chek parameter
 * Return: returns void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
	if (d == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	if (d == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
}
}
