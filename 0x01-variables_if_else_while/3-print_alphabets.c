#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the alphabeth in lower and uppercase
 * Description: prints letters
 * and the prints is abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
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
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
