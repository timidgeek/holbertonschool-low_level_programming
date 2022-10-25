#include "dog.h"

/**
* free_dog - frees dog memory
* @d: dog
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
