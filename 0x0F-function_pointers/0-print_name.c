#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - check he code
 * @name: check paramter
 * @f: check parameter1
 * Return: returns void
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
	return;
}
else
{
	f(name);
}
}
