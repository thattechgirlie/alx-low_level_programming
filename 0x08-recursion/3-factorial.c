#include "main.h"
#include <stdio.h>
/**
 * factorial - check the code
 * @n: check parameter
 * Return: returns void
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
