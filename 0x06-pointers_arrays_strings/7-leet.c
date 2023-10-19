#include "main.h"
/**
 * leet - check the code
 * @k: check parameter
 * Return: returns k
 */
char *leet(char *k)
{
int g;
int b;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (g = 0; k[g] != '\0'; g++)
{
	for (b = 0; b <= 9; b++)
		if (k[g] == s1[b])
		{
			k[g] = s2[b];
		}
}
return (k);
}
