#include "holberton.h"
/**
 * rev_string - the function that reverses a string.
 * @s: The char array to reverse.
 */
void rev_string(char *s)
{
int i = 0;
int j = 0;
char str[500];

while (s[i] != '\0')
{
i++;
}
i--;
while (i >= 0)
{
s[i] = str[j];
i--;
j++;
}
}
