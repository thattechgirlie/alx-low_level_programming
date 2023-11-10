#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - check the code
 * @n: check parameter
 * Return: returns 0
 */
int sum_them_all(const unsigned int n, ...)
{
int sum;
unsigned int a;
va_list k;
va_start(k, n);

if (n == 0)
	return (0);
for (a = 0; a < n; a++)
{
	sum += va_arg(k, int);
}
va_end(k);
return (sum);
}
