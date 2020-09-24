#include "holberton.h"
/**
 * positive_or_negative - This program will test a number
 * if the number is positive, negative or zero.
 * @i: this parameter is a integer
 * Description: prints numbers
 * and the prints if it is positive,negative or zero
 * Return: 0
 *
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
