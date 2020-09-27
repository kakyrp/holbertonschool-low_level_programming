#include "holberton.h"
/**
 * more_numbers - print the numbers
 * from 0 to 14, ten times.
 * from 0 to 14.
 */
void more_numbers(void)
{
int a;
for (a = 0; a < 10; a++)
{
int i = 0;
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar ((i / 10) + '0');
}
_putchar ((i % 10) + '0');
}
_putchar (10);
}
}
