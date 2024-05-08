#include "search_algos.h"
/** linear_search - main part of code
 * @array: shows array
 * @size: gives us size
 * @value: gives us value
 * Return: returns assigned value
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *array);
		if (*array == value)
			return (i);
		array++;
	}
	return (-1);
}
