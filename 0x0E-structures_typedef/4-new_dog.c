#include "dog.h"
/**
* new_dog - creates a new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: NULL if function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = strcpy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = strcpy(new_dog->owner, owner);

	return (new_dog);
}
