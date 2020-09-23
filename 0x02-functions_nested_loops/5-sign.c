#include "holberton.h"
/**
* print_sign - prints the sign of a number.
* @n: The character to evaluate
* Return: greater than zero 1, 0 or -1.
* On error, -1 is returned, and errno is set appropriately.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar (43);
return (1);
}
else if (n == 0)
{
_putchar (48);
return (0);
}
else
{
_putchar (45);
return (-1);
}
}
