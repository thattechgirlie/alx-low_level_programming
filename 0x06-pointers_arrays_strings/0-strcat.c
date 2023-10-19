#include "main.h"
#include <stdio.h>
/**
 * _strcat - check the code
 * @dest: check parameter
 * @src: check parameter1
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
int srclen = 0;
int destlen = 0;
int a;

for (a = 0; dest[a] != '\0'; a++)
{
	destlen++;
}
for (a = 0; src[a] != '\0'; a++)
{
	srclen++;
}
for (a = 0; a <= srclen; a++)
{
	dest[destlen + a] = src[a];
}
return (dest);
}
