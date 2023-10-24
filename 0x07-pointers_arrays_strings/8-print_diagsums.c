#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - check the code
 * @a: check the parameter
 * @size: check parameter1
 * Return: returns void
 */
void print_diagsums(int *a, int size)
{
int count0;
int count1;
int b;

count0 = 0;
count1 = 0;

for (b = 0; b < size; b++)
{
	count0 = count0 + a[b * size + b];
}
for (b = size - 1; b >= 0; b--)
{
	count1 = count1 + a[b * size + (size - b - 1)];
}
printf("%d, %d\n", count0, count1);
}
