#include "main.h"
/**
 * clear_bit - check main code
 * @n: check par1
 * @index: check par2
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
{
	return (-1);
}
*n &= ~(1 << index);
return (1);
}
