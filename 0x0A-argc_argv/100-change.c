#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code
 * @argc: check count parameter
 * @argv: check vector parameter
 * Return: returns void
 */
int main(int argc, char *argv[])
{
int a, b, c;
int change[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
	printf("error\n");
	return (1);
}
a = atoi(argv[1]);
c = 0;
if (a < 0)
{
	printf("0\n");
	return (0);
}
for (b = 0; b < 5 && a >= 0; b++)
{
	while (a >= change[b])
	{
		c++;
	}
}
printf("%d\n", c);
return (0);
}
