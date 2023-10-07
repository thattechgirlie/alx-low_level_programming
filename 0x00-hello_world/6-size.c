#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{ printf("size of a char: %lu byte(s)", sizeof(char));
printf("size of int: %lu byte(s)", sizeof(int));
printf("size of float: %lu byte(s)", sizeof(float));
printf("size of long long int: %lu byte(s)", sizeof(long long int));
printf("size of long int: %lu byte(s)", sizeof(long int));
return (0);
}
