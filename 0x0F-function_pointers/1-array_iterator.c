#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - check the code
 * @size: size parameter
 * @action: action parameter
 * @array: array parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;

if (array && action)
{
	a = 0;
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
}
