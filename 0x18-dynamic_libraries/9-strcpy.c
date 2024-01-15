#include <stdio.h>
#include "main.h"
/**
 * _strcpy - check code
 * @dest: check parameter
 * @src: check parameter1
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
int a;

for (a = 0; src[a] != '\0'; a++)
{
	dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}
