#ifndef DOG_H
#define DOG_H

/* libraries */

#include <stdlib.h>
#include <stdio.h>

/* structures */

/**
* struct dog - puppy stuff
* @name: dog name
* @age: dog age
* @owner: dog owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - nickname for struct dog
*/

typedef struct dog dog_t;

/* prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
