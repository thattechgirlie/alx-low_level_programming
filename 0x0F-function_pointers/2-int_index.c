#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - check the code
 * @array: check parameter
 * @size: check size parameter
 * @cmp: check parameter1
 * Return: returns 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int a = 0;

if (size > 0)
{
	if (array != NULL && cmp != NULL)
	{
		while (a < size)
		{
			if (cmp(array[a]))
				return (a);
			a++;
		}
	}
}
return (-1);
}
