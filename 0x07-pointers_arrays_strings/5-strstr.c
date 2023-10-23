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
for (haystack = 0; *haystack != '\0'; haystack++)
{
	while (haystack == needle && *needle != '\0')
	{
		haystack++;
		needle++;
	}
	if (*needle == '\0')
	{
		return (haystack);
	}
}
return (0);
}
