#include <stdio.h>
/**
 * main - Entry point for my code.
 *
 * Return: Always 0.
 */
int main(void)
{
int k;
for (k = 1; k <= 100; k++)
{
if (k % 3 == 0 && k % 5 == 0)
{
printf("FizzBuzz");
}
else if (k % 3 == 0)
{
printf("Fizz");
}
else if (k % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", k);
}
if (k < 100)
{
putchar(32);
}
else if (k == 100)
{
putchar(10);
}
}
return (0);
}
