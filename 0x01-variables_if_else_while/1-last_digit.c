#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	y = n % 10;
	if (y > 5)
		printf("last digit of %d is mre than 5", n);
	else if (y == 0)
		printf("last digit of %d is 0", n);

	else if (y < 6 && y != 0)	
		printf("last digit of %d is less than 6 and not 0", n);

	printf("\n");
	return (0);
}
