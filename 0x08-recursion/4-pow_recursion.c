#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - check the  code
 * @x: check parameter1
 * @y: check parameter2
 * Return: returns void
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
else if (y == 0)
{
	return (1);
}
else
{
	return (x * _pow_recursion(x, (y - 1)));
}
return (0);
}
