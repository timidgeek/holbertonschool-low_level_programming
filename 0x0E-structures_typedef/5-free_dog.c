#include "dog.h"

/**
* free_dog - frees dog memory
* @d: dog to free
* Return: 0
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
