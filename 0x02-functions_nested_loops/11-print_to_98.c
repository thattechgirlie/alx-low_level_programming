#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check the code
 * @n: check the parameter
 * Return: always 0
 */
void print_to_98(int n)
{
for (n <= 98; n++;)
{
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
}
for (n >= 98; n--;)
{
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
}
}
