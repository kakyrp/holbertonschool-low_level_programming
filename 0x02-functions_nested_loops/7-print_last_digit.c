#include "holberton.h"
/**
* print_last_digit - This function computes the absolute value of an integer
* @k: The character to evaluate
* Return: prints the last number.
*/
int print_last_digit(int k)
{
int l = 0;
if (k < 0)
{
k = k * -1;
}
l = k % 10;
_putchar ('0' + l);
return (l);
}
