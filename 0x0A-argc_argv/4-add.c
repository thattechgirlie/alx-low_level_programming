#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argv: check parameter
 * @argc: check parameer1
 * Return: returns 0
 */
int main(int argc, char **argv)
{
int a;
int b;
int sum = 0;
char *flag;

if (argc < 2)
{
	printf("0\n");
	return (0);
}
for (a = 1; argv[a]; a++)
{
	b = strtol(argv[a], &flag, 10);
	if (*flag)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		sum += b;
	}
}
printf("%d\n", sum);
return (0);
}
