#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - check the code
 * @n: check parameter
 * Return: returns void
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
	return (-1);
}
else if (n == 0)
	return (1);
else
{
	return (n * _sqrt_recursion(n - 1));
}
}
