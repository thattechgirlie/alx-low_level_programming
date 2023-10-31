#include "main.h"
#include <stdlib.h>
/**
 * create_array - check the code
 * @size: check size parameter
 * @c: check the parameter of character
 * Return: returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int a;

str = malloc(sizeof(char) * size);

if (size == 0 || str == NULL)
{
	return (NULL);
}
for  (a = 0; a < size; a++)
{
	str[a] = c;
}
return (str);
}
