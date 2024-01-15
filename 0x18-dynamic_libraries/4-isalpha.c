#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check the code.
 * @c: check parameter.
 * Return: returns 1 or 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
