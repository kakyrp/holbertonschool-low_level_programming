#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: The array to reverse
 * @n: is the number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int b;
	int *aux;
	aux = a + (n - 1);
	while (n > 0)
	{
		b = *a;
		*a = *aux;
		*aux = b;
		a++;
		aux--;
		n--;
		if (aux == a)
			break;
	}
}
