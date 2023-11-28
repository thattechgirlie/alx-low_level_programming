#include "main.h"
/**
 * print_bi - check the code
 * @n: check parameter
 * Return: returns void
 */
void print_bi(unsigned long int n)
{
if (n == 0)
{
	;
}
print_bi(n >> 1);

if ((n & 1) == 1)
{
	_putchar('1');
}
if ((n & 1) == 0)
{
	_putchar('0');
}
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
	print_bi(n);
}
}
