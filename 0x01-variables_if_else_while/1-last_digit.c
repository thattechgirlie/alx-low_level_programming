#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
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
        y = n % 10;
        if (y > 5)
        {
		printf("last digit of %d is %d and is greater than 5\n", n, y);
	}
       	if (y < 6 && y != 0)
	{	printf("last digit of %d is %d and is less than 6 and not 0\n", n, y);
	}
	else
	{	
		printf("last digit of %d is %d and is 0\n");
	}
	return (0);
}
