#include "holberton.h"
/**
 * swap_int - function that changes the address for the variable n.
 * @a: the pointer to assign a new value.
 * @b: the second pointer to assign a new value.
 */
void swap_int(int *a, int *b)
{
int c, d;
c = *a;
d = *b;
*a = d;
*b = c;
}
