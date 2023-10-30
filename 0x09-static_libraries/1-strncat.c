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
int y;
int z;

y = 0;

while (dest[y] != '\0')
{
	y++;
}
z = 0;
while (z < n && src[y] != '\0')
{
	dest[y] = src[z];
	y++;
	z++;
}
dest[y] = '\0';
return (dest);
}
