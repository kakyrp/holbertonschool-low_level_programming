#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program will assign a random number
 * if the number is positive, negative or zero.
 *
 * Description: prints numbers
 * and the prints if it is positive,negative or zero
 * Return: 0
 *
 */

int main(void)
{
int n;
int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
k = n % 10;
if (k > 5)
printf("Last digit of %i is %i and is greater than 0: is positive\n", n, k);
else if (k == 0)
printf("Last digit of %i is %i and is zero\n", n, k);
else
printf("Last digit of %i is %i and is less than 0: is negative\n", n, k);

return (0);
}
