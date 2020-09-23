#include "holberton.h"
/**
* print_last_digit - This function computes the absolute value of an integer
* @k: The character to evaluate
* Return: prints the last number.
*/
int print_last_digit(int k)
{
k = k % 10;
if (k < 0)
{
k = k * -1;
}
_putchar ('0' + k);
return (k);
}
