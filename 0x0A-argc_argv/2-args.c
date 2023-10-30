#include <stdio.h>
/**
 * main - check the code
 * @argc: check count parameter
 * @argv: check vector parameter
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
int a;

for (a = 0; a < argc; a++)
	printf("%s\n", argv[a]);
return (0);
}
