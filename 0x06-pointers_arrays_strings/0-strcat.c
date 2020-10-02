#include "holberton.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: The first string.
 * @dest: The second string.
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)

{
int l = 0, i = 0;
while (dest[l] != '\0')
{
l++;
i++;
}
*(dest + l + 1) = ' ';
i = 0;

while (src[i] != '\0')
{
*(dest + (l + i)) =  src[i];
i++;
}
*(dest + (l + i + 1)) = '\0';
return (dest);
}
