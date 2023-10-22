#include <stdio.h>
#include "main.h"
/**
 * print_diagonal- check the code
 * @n: check parameter
 * Return: Always 0.
 */
void print_diagonal(int n)
{
if (n <= 0)
	putchar('\n');
else
{
	int k, l;

	for (k = 0; k < n; k++)
	{
		for (l = 0; l <= k; l++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
}
