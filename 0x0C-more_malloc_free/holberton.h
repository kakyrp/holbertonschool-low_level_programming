#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
char *memorySet(char *ptr, int x, unsigned int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char memoryCopy(char *dest, char *src, unsigned int n);


#endif
