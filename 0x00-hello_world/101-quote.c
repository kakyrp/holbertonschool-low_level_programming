#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point.
 * Return: 0 when return is success.
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, s, 59);
	return (1);
}
