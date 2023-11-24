#include "main.h"
/**
 * set_bit - check main code
 * @n: check par1
 * @index: check par2
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int a;

if (index > (sizeof(unsigned long int) * 8 - 1))
{
	return (-1);
}
a = 1 << index;
*n = *n | a;
return (1);
}
