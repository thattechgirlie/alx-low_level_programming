#include "main.h"
/**
 * get_bit - check the code
 * @n: check par1
 * @index: check par2
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int a;
unsigned long int b;

if (index > (sizeof(unsigned long int) * 8 - 1))
{
	return (-1);
}
a = 1 << index;
b = n & a;

if (b == a)
	return (1);
return (0);
}
