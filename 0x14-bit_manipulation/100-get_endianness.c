#include "main.h"
/**
 * get_endianness - check main code
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
int h = 1;
char *g;

g = (char *) & h;
return (*g);
}
