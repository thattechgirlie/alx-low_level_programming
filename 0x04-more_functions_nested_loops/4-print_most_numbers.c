#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int b;
for (b = 0; b < 10; b++)
{
	if (b != 2 && b != 4)
	{
		putchar(b + '0');
	}
}
putchar('\n');
}
