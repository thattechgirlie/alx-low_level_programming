#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 *@a: check parameter
 *@b: check parameter2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int z;

z = *a;
*a = *b;
*b = z;
}
