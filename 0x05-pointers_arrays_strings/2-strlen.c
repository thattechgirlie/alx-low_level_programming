#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 * @s: check parameter
 * Return: returns count
 */
int _strlen(char *s)
{
int a;
int count = 0;

for (a = 0; s[a] != '\0' ; a++)
{
	count++;
}
return (count);
}
