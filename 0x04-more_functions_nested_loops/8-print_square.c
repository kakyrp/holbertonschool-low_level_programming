#include "holberton.h"
/**
 * print_square - prints a square using #.
 * @size: The size of the square.
 */
void print_square(int size)
{
int k;
int j;

if (size > 0)
{
for (k = 0; k < size; k++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar (10);
}
}
else
{
_putchar(10);
}
}
