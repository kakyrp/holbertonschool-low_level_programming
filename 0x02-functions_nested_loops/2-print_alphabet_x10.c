#include "holberton.h"
/**
* print_alphabet_x10 - prints the alphabet from a to z in lower case
* ten times, followed by a new line.
*/

void print_alphabet_x10(void)
{
char ch;
int i = 0;

for (i = 0 ; i <= 9; i++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar(10);
}
}
