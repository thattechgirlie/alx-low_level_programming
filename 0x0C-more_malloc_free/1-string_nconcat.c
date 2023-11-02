#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - check the code
 * @s1: check parameter1
 * @s2: check parameter2
 * @n: check parameter3
 * Return: returns NULL when function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
{
	s1 = "";
}
unsigned int a = strlen(s1);
unsigned int b = (s2 != NULL) ? strlen(s2) : 0;

if (n >= s2)
{
	n = b;
}
char *result = (char *)malloc(a + n + 1);

if (result == NULL)
{
	fprintf(stderr, "Memory allocation failed\n");
	return (NULL);
}
}
