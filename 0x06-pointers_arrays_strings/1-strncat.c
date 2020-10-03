#include "holberton.h"

/**
 * _strncat - function that concatenates two strings.
 * @src: The first string.
 * @dest: The second string.
 * @n: The bytes in the strings.
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int l = 0, i = 0, j = 0;

while (dest[l] != '\0')
{
l++;
i++;
}
i = 0;

while (src[i] != '\0')
{
i++;
j++;
}
i = 0;
while (i < n)
{
*(dest + (l + i)) = *(src + i);
i++;
if (i > j)
{
break;
}
}
return (dest);
}
