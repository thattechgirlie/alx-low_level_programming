#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - check the code
 * @a: check parameter
 * Return: returns y
 */
int print_last_digit(int a)
{
int y;
y = a % 10;
if (a < 0)
{
	y = -y;
}
_putchar(y + '0');
return (y);
}
