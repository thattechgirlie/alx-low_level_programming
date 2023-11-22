#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - check code
 * @format: check parameter1
 * Return: returns vois
 */
void print_all(const char * const format, ...)
{
int a;
int flag;
char *str;
va_list a_list;
va_start(a_list, format);
a = 0;

while (format != NULL && format[a] != '\0')
{
	switch (format[a])
	{
		case 'c':
			printf("%c", va_arg(a_list, int));
			flag = 0;
			break;
		case 'i':
			printf("%i", va_arg(a_list, int));
			flag = 0;
			break;
		case 'f':
			printf("%f", va_arg(a_list, double));
			flag = 0;
			break;
		case 's':
			str = va_arg(a_list, char*);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			flag = 0;
			break;
		default:
		flag = 1;
		break;
	}
if (format[a + 1] != '\0' && flag == 0)
printf(", ");
a++;
}
printf("\n");
va_end(a_list);
}


