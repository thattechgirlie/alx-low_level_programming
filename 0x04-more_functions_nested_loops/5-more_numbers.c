#include <stdio.h>
#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int a, b;
for (a = 0; a < 10; a++)
{
	for (b = 0; b < 13; b++)
	{
		putchar(b + '0');
	}
	putchar('\n');
}
}
