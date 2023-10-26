#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - check the code
 * @s: check parameter
 * Return: returns Int
 */
int _strlen_recursion(char *s)
{
int Int = 0;

if (*s)
{
	Int++;
	Int += _strlen_recursion(s + 1);
}
return (Int);
}
