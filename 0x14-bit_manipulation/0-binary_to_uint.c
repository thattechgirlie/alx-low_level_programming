#include "main.h"
/**
 * binary_to_uint - check the code
 * @b: check parameter
 * Return: returns converted no or 0
 */
unsigned int binary_to_uint(const char *b)
{
int z;
unsigned int r = 0;

if (b != 0)
{
	return (0);
}
for (z = 0; b[z] != '\0'; z++)
{
	if (b[z] != '0' && b[z] != '1')
		return (0);
	r <<= 1;

	if (b[z] == '1')
		r += 1;
}
return (r);
}
