#include "holberton.h"
/**
 * print_triangle - prints a triangle using #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
int k;
int j;
int l;

if (size <= 0)
{
_putchar(10);
}
for (k = 0; k < size; k++)
{
for (j = size - 1; j > k; --j)
{
_putchar(32);
}
for (l = 0; l <= k; l++)
{
_putchar(35);
}
_putchar(10);
}
}
