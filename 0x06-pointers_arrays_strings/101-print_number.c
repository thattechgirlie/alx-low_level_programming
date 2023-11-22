#include "main.h"
/**
 * print_number - check the code
 * @n: check parameter
 * Return: returns void
 */
void print_number(int n)
{
unsigned int n1;

if (n < 0)
{
	putchar('_');
	n1 = -n;
}
if (n1 / 10 != 0)
{
	print_number(n1 / 10);
}
putchar((n1 % 10) + '0');
}
