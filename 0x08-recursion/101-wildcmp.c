#include "main.h"
/**
 * wildcmp - check the code
 * @s1: check par1
 * @s2: check par2
 * Return: returns 1 if strings con identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == 0)
{
	if (*s2 != '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	return (*s2 == '\0');
}
if (*s2 == '*')
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
else
	return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
