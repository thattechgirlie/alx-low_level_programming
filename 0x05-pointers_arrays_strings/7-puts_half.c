#include "main.h"
#include <stdio.h>
/**
 * puts_half- check parameter
 * @str: check parameter
 * Return: always 0
 */
void puts_half(char *str)
{
int a;
int b;
int count = 0;

for (a = 0; str[a] != '\0'; a++)
{
	count++;
}
b = (count - 1) / 2;

for (a = b + 1; str[a] != '\0'; a++)
{
	putchar(str[a]);
}
putchar('\n');
}
