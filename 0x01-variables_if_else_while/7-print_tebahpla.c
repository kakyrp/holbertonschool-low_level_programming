#include <stdio.h>
/**
 * main - print the alphabeth backwards
 * Description: prints letters
 * and the prints is zyxwvutsrqponmlkjihgfedcba
 * Return: 0
 *
 */
int main(void)
{
int a = 122;

for (a = 122; a > 96; a--)
{
putchar(a);
}
putchar(10);
return (0);
}
