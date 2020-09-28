#include "holberton.h"
/**
 * print_line - print the lines requested.
 * @n: the number of times the character _ should be printed.
 */
void print_line(int n)
{
int k;
if (n > 0)
{
for (k = 0; k <= n; k++)
{
_putchar (95);
}
}
_putchar (10);
}
