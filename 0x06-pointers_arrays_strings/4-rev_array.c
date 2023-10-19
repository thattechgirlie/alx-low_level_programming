#include "main.h"
/**
 * reverse_array - check the code
 * @a: check parameter
 * @n: check parameter1
 *
 * Return: returns 0
 */
void reverse_array(int *a, int n)
{
int x;
int b;

for (x = 0; x < n--; x++)
{
	b = a[x];
	a[x] = a[n];
	a[n] = b;
}
}
