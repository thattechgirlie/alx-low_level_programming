#include "main.h"
#include <stdio.h>
/**
 * _memcpy - check the code
 * @src: check parameter1
 * @dest: check parameter2
 * @n: check parameter3
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
	dest[a] = src[a];
}
return (dest);
}
