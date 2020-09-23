#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - prints numbers from n to 98.
* @n: number given by Holberton.
*/
void print_to_98(int n)
{
if (n == 98)
{
printf("%d", n);
}
else if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
n++;
if (n <= 98)
{
printf(", ");
}
}
}
else
{
while (n >= 98)
{
printf("%d", n);
--n;
if (n >= 98)
{
printf(", ");
}
}
}
printf("\n");
}
