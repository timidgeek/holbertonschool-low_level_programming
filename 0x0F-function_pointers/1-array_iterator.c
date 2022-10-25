#include "function_pointers.h"
/**
* array_iterator - executes a function
* @array: array
* @size: size
* @action: pointer to function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (index = 0; index < size; index++)
		action(array[index]);
}
