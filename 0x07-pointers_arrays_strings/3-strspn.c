#include "main.h"
#include <stdio.h>
/**
 * _strspn - check the code
 * @s: check parameter
 * @accept: check parameter1
 * Return: returns void
 */
unsigned int _strspn(char *s, char *accept)
{
int a;
unsigned int c = 0;

while (*s)
{
	for (a = 0; accept[a]; a++)
	{
		if (*s == accept[a])
		{
			c++;
		       	break;
		}
		else if (accept[a + 1] == '\0')
		{
			return (c);
		}
	}
	s++;
}
return (c);
}
