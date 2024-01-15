#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 * @haystack: check parameter
 * @needle: check parameter1
 * Return: returns void
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
	char *I = haystack;
	char *P = needle;

	while (*I == *P && *P != '\0')
	{
		I++;
		P++;
	}
	if (*P == '\0')
	{
		return (haystack);
	}
}
return (0);
}
