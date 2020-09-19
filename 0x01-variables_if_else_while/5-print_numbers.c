#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print numbers from base 10
 * Description: prints numbers
 * and the prints is 0-9
 * Return: 0
 *
 */
int main(void)
{
int a = 0;
for (a = 0; a <= 9; a++)
{
printf("%d", a);
}
putchar(10);
return (0);
}
