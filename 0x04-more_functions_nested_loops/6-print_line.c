#include "main.h"
#include <stdio.h>
/**
 * print_line - check the code
 * @n: check parameter
 * Return: Always 0.
 */
void print_line(int n)
{
if (n <= 0)
{
	putchar('\n');
}
else
{
	int y;

	for (y = 1; y <= n; y++)
	{
		putchar('_');
	}
	putchar('\n');
}

}
