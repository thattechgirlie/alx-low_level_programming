#include <stdio.h>
#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
int x, y;
int result;
for (x = 0; x <= 9; x++)
{
	for (y = 0; y <= 9; y++)
	{
		result = x * y;
		printf("%d, ", result);
	}
	putchar('\n');
}
}

