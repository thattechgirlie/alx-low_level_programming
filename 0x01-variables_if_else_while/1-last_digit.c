#include <stdlib.h>
#include <time.h>

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int n;
int y;
srand(time(0));
n = rand() - RAND_MAX / 2;
y = n % 10;
printf("last digit of %d is %d and",n,y);
if (y > 5){
  printf("is greater than 5");
}
else if (y == 0){
  printf("is 0");
}
else if (y < 6 && y != 0){	
  printf("is less than 6 and not 0");
}		
printf("\n");
return (0);
}
