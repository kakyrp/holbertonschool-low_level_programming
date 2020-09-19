#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the alphabeth in lowercase
 * Description: prints letters
 * and the prints is abcdefghijklmnopqrstuvwxyz
 * Return: 0
 *
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
