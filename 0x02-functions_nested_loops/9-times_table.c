#include "holberton.h"
/**
* times_table - prints the tables from 0 to 9
*/
void times_table(void)
{
int factor1, factor2, result;
for (factor1 = 0; factor1 < 10; factor1++)
{
for (factor2 = 0; factor2 < 10; factor2++)
{
if (factor2 == 0)
{
_putchar('0');
_putchar(44);
}
else
{
result = factor1 * factor2;
if (factor2 == 9)
{
if (result > 9)
{
_putchar(32);
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
_putchar(10);
}
else
{
_putchar(32);
_putchar(32);
_putchar(result + '0');
_putchar(10);
}
}
else
{
if (result > 9)
{
_putchar(32);
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
_putchar(44);
}
else
{
_putchar(32); _putchar(32);
_putchar(result + '0');
_putchar(44);
}}}}}}