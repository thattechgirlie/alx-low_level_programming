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
		if (y == 0)
		{
			printf("%d, ", result);
		}
		else
		{
			printf("%2d", result);
			if (y != 9)
				printf(", ");
		}
	}
	putchar('\n');
}
}

