#ifndef DOG_H
#define DOG_H

/* libraries */

#include <stdlib.h>

/* structures */

struct dog
{ 
	char *name;
	float age;
	char *owner;
};

/* prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
