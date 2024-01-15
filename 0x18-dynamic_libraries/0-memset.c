#include "main.h"
#include <stdio.h>
/**
 * _memset - check the code
 * @n: check parameter1
 * @s: check parameter2
 * @b: check parameter3
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int y;

for (y = 0; y < n; y++)
{
	s[y] = b;
}
return (s);
}
