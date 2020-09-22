#include "holberton.h"
/**
 * print_alphabet - printing the alphabet
 * description: print letters
 * and the print is: abcdefghijklmnopqrstuvwxyz
 * Return 0
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

int main(void)
{

    print_alphabet ();
return(0);
}


