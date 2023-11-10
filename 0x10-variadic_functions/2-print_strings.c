#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - check the code
 * @separator: check parameter
 * @n: check parameter1
 * Return: returns 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int a;
va_list b;
va_start(b, n);

if (separator == NULL)
{
	separator = "";
}
for (a = 0; a < n; a++)
{
	printf("%d", va_arg(b, int));
	if (a < n - 1)
	{
		printf("%s", separator);
	}
}
printf("\n");
va_end(b);
}
