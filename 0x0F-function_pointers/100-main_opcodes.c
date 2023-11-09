#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * main - check the code
 * @argc: check parameter
 * @argv: check parameter1
 * Return: returns 0
 */
int main(int argc, char **argv)
{
int a;

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
print_opcodes((char *) &main, a);
return (0);
}
