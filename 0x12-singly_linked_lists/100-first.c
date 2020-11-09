#include <stdio.h>

void hare_and_tortoise(void)__attribute__((constructor));

/**
 * hare_and_tortoise - function that prints a message
 * Return: no return.
*/
void hare_and_tortoise(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
