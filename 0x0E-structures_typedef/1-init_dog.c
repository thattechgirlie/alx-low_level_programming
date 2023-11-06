#include "dog.h"
#include <stdio.h>
/**
 * init_dog - check the code
 * @d: check parameter1
 * @name: check prameter2
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: returns void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}
