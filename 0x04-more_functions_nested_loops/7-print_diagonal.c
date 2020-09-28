#include "holberton.h"
/**
 * print_diagonal - print the lines requested.
 * @n: the number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
int k;
int j;
if (n >= 0)
{
for (k = 0; k < n; k++)
{
for (j = 0; j < k; j++)
{
_putchar (32);
}
_putchar (92);
_putchar (10);
}
}
}
