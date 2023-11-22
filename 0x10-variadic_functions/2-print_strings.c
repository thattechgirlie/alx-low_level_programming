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
char *z;

va_start(b, n);

for (a = 0; a < n; a++)
{
	z = va_arg(b, char *);
	if (z == NULL)
		printf("(nil)");
	else
		printf("%s", z);

	if (a != (n - 1) && separator != NULL)
	{
		printf("%s", separator);
	}
}
printf("\n");
va_end(b);
}
