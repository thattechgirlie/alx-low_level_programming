#include <stdio.h>
#include "main.h"
/**
 * _strncpy - check the code
 * @dest: check parameter
 * @src: check parameter1
 * @n: check parameter2
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int y;

for (y = 0; y < n && src[y] != '\0'; y++)
{
	dest[y] = src[y];
}

while (y < n)
{
	dest[n] = '\0';
	y++;
}

return (dest);
}
