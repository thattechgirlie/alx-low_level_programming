#include "main.h"
#include <stdio.h>
int actual_prime(int n, int i);

/**
 * is_prime_number - check code
 * @n: parameter to check
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
if (n <= 1)
{
	return (0);
}
else
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - check code
 * @n: check parameter
 * @i: check parameter1
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
if (i == 1)
{
	return (1);
}
if (n % i == 0 && i > 0)
{
	return (0);
}
else
	return (actual_prime(n, i - 1));
}
