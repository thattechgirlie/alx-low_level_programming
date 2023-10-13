#include <stdio.h>
#include "main.h"

/**
 * print_numbers - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
{
	putchar(a + '0');
}
putchar('\n');
}
