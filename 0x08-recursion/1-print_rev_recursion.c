#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - check the code
 * @s: check parameter
 * Return: returns void
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
	_print_rev_recursion(s + 1);
	putchar(*s);
}
}
