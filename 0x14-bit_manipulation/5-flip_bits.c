#include "main.h"
/**
 * flip_bits - check main ode
 * @n: check par1
 * @m: check par2
 * Return: returns bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int d;
int f = 0;
unsigned long int t;
unsigned long int k;
k = n ^ m;

for (d = 63; d >= 0; d--)
{
	t = k >> d;
	if (t & 1)
		f++;
}
return (f);
}
