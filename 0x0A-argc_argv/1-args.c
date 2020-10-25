#include "holberton.h"
#include <stdlib.h>
/**
 * main - is the entry function
 * @argc: number of parameters for main.
 * @argv: pointer of array of pointers with the string for main
 * Return: is always 0.
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
