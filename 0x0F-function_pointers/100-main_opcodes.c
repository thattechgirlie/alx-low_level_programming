#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: check parameter
 * @argv: check parameter1
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
int a;
int b;
char *k;

if (argc != 2)
{
	printf("Error\n");
	exit(1);
}
a = atoi(argv[1]);

if (a < 0)
{
	printf("Error\n");
	exit(2);
}
k = (char *)main;
for (b = 0; b < a; b++)
{
	if (b == a - 1)
	{
		printf("%02hhx\n", k[b]);
		break;
	}
printf("%02hhx", k[b]);
}
return (0);
}
