#ifndef STRUCTS
#define STRUCTS
/**
 * struct dog - Structure for dog description
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: Longer description.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);

#endif
