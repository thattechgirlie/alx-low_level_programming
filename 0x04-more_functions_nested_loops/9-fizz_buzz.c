#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
	if ((a % 3 == 0) && (a % 5 == 0))
	{
		printf("%s", "FizzBuzz");
	}
	else if (a % 3 == 0)
	{
		printf("%s", "FizzBuzz");
	}
}
}
