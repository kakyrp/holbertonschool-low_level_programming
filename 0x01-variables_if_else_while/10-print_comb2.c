#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print numbers with space
 * Description: prints numbers
 * and the prints is 0-9
 * Return: 0
 *
 */
int main(void)
{
int a = 0;
int b = 0;
for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
putchar(a);
putchar(b);
if (b <= 57)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
