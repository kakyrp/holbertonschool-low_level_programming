#include "holberton.h"
/**
 * _puts - the lenght of the string.
 * @str: The char array to print.
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar(10);
}
