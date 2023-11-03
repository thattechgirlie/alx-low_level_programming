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
unsigned int a;
unsigned int b;
unsigned int c;
char *y;

if (s1 == NULL)
{
	a = 0;
}
if (s2 == NULL)
{
	b = 0;
}
y = malloc(sizeof(char) * (a + n + 1));

if (y == NULL)
{
	return (NULL);
}
for (c = 0; c < a; c++)
	y[c] = s1[c];
for (c = 0; c < b; c++)
	y[c + a] = s2[c];
y[a + b] = '\0';
return (y);
}
