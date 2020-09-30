#include "holberton.h"
/**
 * print_rev - the lenght of the string.
 * @s: The char array to count.
 * Return: The length of the string.
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
while (i >= 0)
{
_putchar (s[i]);
i--;
}
_putchar (10);
}
