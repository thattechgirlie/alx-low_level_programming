#include <stdio.h>
/**
 *main - check the code
 * @argc: check count parameter
 * @argv: check vector parameter
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
int a = 0;
int b = 0;

if (argc == 3)
{
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	printf("%d\n", a * b);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
