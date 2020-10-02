#include "holberton.h"
#include <stdio.h>

/**
 * print_array - the function that prints the half of the array.
 * @n: is the number of elements of the array to be printed.
 * @a: The arrays.
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
if (i < (n - 1))
printf("%d, ", a[i]);
else
{
printf("%d", a[i]);
}
}
printf("\n");
}
