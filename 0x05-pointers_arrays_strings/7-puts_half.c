#include "holberton.h"

/**
 * puts_half - the function that prints the half of the array.
 * @str: The variable / string to print.
 */
void puts_half(char *str)
{
int i, a, b;

for (i = 0; str[i] != '\0';)
{
i++;
}
a = i - 1;
b = (a / 2);
if (((a + 1) % 2) == 0)
{
b = ((a + 2) / 2);
}
else
{
b = ((a + 2) / 2);
}
for (i = b; i <= a; i++)
{
_putchar(str[i]);
}
_putchar(10);
}
