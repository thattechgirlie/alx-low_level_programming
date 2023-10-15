#include "main.h"

/**
 *print_square - check the code
 *@size: check parameter
 * Return: Always 0.
 */
void print_square(int size)
{
if (size <= 0)
{
	putchar('\n');
}
else
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			putchar('#');
		}
		_putchar('\n');
	}
}
}
