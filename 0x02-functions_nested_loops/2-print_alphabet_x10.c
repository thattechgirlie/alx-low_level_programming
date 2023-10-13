#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int a;
char b;
for (a = 0; a < 10; a++)
{
	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}

}
