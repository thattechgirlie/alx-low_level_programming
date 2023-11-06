#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - check the code
 * @name: name of dog
 * @age: age of dog
 * @owner: owner pf dog
 * Return: returns void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int n, a, o;
dog_t *dog;

if (name == NULL || owner == NULL)

	return (NULL);
dog = malloc(sizeof(dog_t));

if (dog == NULL)
	return (NULL);
for (n = 0; name[n]; n++)
	;
n++;
dog->name = malloc(n *sizeof(char));

if (dog->name == NULL)
{
	free(dog);
	return (NULL);
}
for (a = 0; a < n; a++)
	dog->name[a] = name[a];
dog->age = age;

for (a = 0; owner[a]; a++)
	;
a++;
dog->owner = malloc(a *sizeof(char));

if (dog->owner == NULL)
{
	free(dog->name);
	free(dog);
	return (NULL);
}
for (o = 0; o < a; o++)
	dog->owner[o] = owner[o];
return (dog);
}
