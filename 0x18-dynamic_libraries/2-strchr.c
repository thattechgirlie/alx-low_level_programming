#include "main.h"
#include <stdio.h>
/**
 * _strchr - check the code
 * @s: check parameter1
 * @c: check parameter2
 * Return: always void
 */
char *_strchr(char *s, char c)
{
int a;

for (a = 0; s[a] >= '\0'; a++)
{
	if (s[a] == c)
	{
		return (s + a);
	}
}
return (0);
}
