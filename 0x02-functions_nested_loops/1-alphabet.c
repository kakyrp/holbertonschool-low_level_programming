#include "holberton.h"
/**
* print_alphabet - prints the alphabet from a to z in lower case
* followed by a new line.
*/

void print_alphabet(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar(10);
}
