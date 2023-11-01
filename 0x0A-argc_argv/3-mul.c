#include <stdio.h>
/**
 *main - check the code
 * @argc: check count parameter
 * @argv: check vector parameter
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
