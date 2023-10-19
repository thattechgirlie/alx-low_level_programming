#include <stdio.h>
#include "main.h"
/**
 * _strncat - check the code
 * @dest: check parameter
 * @n: check the parameter
 * @src: check parameter1
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
int  len = strlen(dest);
int y;

for (y = 0; y < n && *src != '\0'; y++)
{
	dest[len + y] = src[y];
	src++;
}
dest[len + y] = '\0';
return (dest);
}
