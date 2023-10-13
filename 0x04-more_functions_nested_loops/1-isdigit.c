#include "main.h"
#include <stdio.h>

/**
 * is_digit - check the code
 * @c: check parameter
 * Return: returns 1 or 0.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
	return (1);
}
else
{
	return (0);
}
}
