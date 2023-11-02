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
if (min > max)
{
	return (NULL);
}
int size = max - min + 1;
int *array = (int *)malloc(size * sizeof(int));

if (array == NULL)
{
	fprintf(stderr, "Memory allocation failed. Exiting...\n");
	exit(EXIT_FAILURE);
}
for (int i = 0; i < size; i++)
{
	array[i] = min + i;
}
return (array);
}
