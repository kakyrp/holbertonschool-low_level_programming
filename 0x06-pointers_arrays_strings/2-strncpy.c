#include "holberton.h"

/**
 * _strn - function similar to the _strcat
 * @src: The first string.
 * @dest: The second string.
 * @n: The bytes to copy.
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}