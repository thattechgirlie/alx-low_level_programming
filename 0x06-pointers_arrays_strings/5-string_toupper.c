#include "main.h"
/**
 * string_toupper - check the code
 * @h: check parameter
 * Return: returns void
 */
char *string_toupper(char *h)
{
int a;
a = 0;

while (h[a] != '\0')
{
	if (h[a] >= 'a' && h[a] <= 'z')
	{
		h[a] = h[a] - 32;
	}
	a++;
}
return (h);
}
