#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements of array to allocate.
 * @size: size of the elements.
 * Return: Pointer to allocated memory or exit with 98.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	p = malloc(nmemb * size);
	if (p == 0)
	{
		return (0);
	}
	memorySet(p, 0, size * nmemb);
	return (p);
}
/**
 * memorySet - initializes n ytes of memory to x.
 * @ptr: initial address
 * @x: variable to initialize with
 * @n: number of bytes to initialize.
 * Return: Pointer char.
 */
char *memorySet(char *ptr, int x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = x;
	}
	return (ptr);
}
