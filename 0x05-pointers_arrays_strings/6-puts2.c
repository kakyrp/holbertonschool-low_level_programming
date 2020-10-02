#include "holberton.h"

/**
 * puts2 - the function that will print every other line.
 * @str: The variable / string to count.
 */
void puts2(char *str)
{
int i, a;

for (i = 0; str[i] != '\0';)
{
i++;
}
a = i - 1;

for (i = 0; i <= a; i += 2)
{
_putchar(str[i]);
}
_putchar(10);
}
