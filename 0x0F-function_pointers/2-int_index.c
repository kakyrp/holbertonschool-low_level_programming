#include "function_pointers.h"
/**
 * int_index - seaches for an integer.
 * @array: array of type int
 * @size: size of array.
 * @cmp: function with argument int and no return.
 * Return: -1 if no elements matches. If size <= 0 -1
 * else index of first element cmp function does no return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
