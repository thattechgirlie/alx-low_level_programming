#include "main.h"
/**
 * int_power - check the code
 * @h: check parameter
 * @m: check par1
 * Return: returns void
 */
unsigned long int_power(unsigned long int h, unsigned int m)
{
unsigned long int a = 1;
unsigned  int b;

for (b = 1; b <= m; b++)
{
	a *= h;
}
return (a);
}

/**
 * print_binary - check the code
 * @n: check parameter
 * Return: void
 */
void print_binary(unsigned long int n)
{
if (n == 0)
{
	_putchar('\0');
}
else
{
	_putchar('1');
}
}
