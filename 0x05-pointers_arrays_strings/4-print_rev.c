#include "main.h"
#include <stdio.h>
/**
 * print_rev - check the code
 *@s: check parameter
 * Return: Always 0.
 */
void print_rev(char *s)
{
int a;
int count = 0;

for (a = 0; s[a] != '\0'; a++)
{
	count++;
}
for (a = count -1; a >= 0; a--)
{
	putchar(s[a]);
}
putchar('\n');
}
