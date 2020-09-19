#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the alphabth
 * Description: prints letters
 * and the prints is abcdfghijklmnoprstuvwxyz
 * Return: 0
 *
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch !='e' && ch != 'q')
{
putchar(ch);
}
}
putchar(10);
return (0);
}
