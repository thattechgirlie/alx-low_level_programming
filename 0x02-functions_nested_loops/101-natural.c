#include <stdio.h>
/**
 * main - check the code
 *
 * Return: returns void
 */
int main(void)
{
int sum = 0;
int a;

for (a = 0; a < 1024; a++)
{
	if (a % 3 == 0 || a % 5 == 0)
	{
		sum = sum + a;
	}
}
printf("%d\n", sum);
}
