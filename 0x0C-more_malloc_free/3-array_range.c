#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * array_range - check the code
 * @min: check parameter1
 * @max: check parameter2
 * Return: returns NULL if min>max and if malloc fails
 */
int *array_range(int min, int max)
{
int i;
int size;
int *array;

if (min > max)
{
	return (NULL);
}
size = max - min + 1;
array = malloc(size * sizeof(int));

if (array == NULL)
{
	return (NULL);
}
for (i = 0; min <= max; i++)
{
	array[i] = min ++;
}
return (array);
}
