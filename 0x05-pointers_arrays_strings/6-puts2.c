#include "main.h"
#include <stdio.h>
/**
 * puts2 - check code
 * @str: check parameter
 * Return: always 0
 */
void puts2(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
	if (a % 2 == 0)
	{
		putchar(str[a]);
	}
}
}
