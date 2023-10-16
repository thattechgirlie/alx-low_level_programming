#include "main.h"
#include <stdio.h>
/**
 * _puts - check the code
 *@str: check parameter
 * Return: Always 0.
 */
void _puts(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
	printf(str[a]);
}
printf("\n");
}
