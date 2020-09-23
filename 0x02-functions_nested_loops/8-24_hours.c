#include "holberton.h"
/**
* jack_bauer - prints the hours and minutes in a day
*/
void jack_bauer(void)
{
int i, m;
for (i = 0; i < 24; i++)
{
for (m = 0; m < 60; m++)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(':');
_putchar(m / 10 + '0');
_putchar(m % 10 + '0');
_putchar(10);
}
}
}
