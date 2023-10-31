#include "main.h"
#include <stdlib.h>
/**
 * _strdup - check the code
 * @str: check the parameter
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
char *p;
int a, b;

if (str == NULL)
{
	return (NULL);
}
a = 0;

while (str[a] != '\0')
{
	a++;
}
p = malloc(sizeof(char) * (a + 1));

if (p == NULL)
{
	return (NULL);
}
for (b = 0; str[b]; b++)
{
	p[b] = str[b];
}
return (p);
}
