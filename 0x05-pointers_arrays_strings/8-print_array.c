#include <stdio.h>
#include "main.h"
/**
 * print_array - check parameter
 * @a: check parameter
 * @n: check parameter1
 * Return: always 0
 */
void print_array(int *a, int n)
{
int y;

for (y = 0; y < n; y++)
{
	printf("%d", a[y]);
	if (y < n - 1)
	{
		printf(", ");
	}
	printf("\n");
}
}
