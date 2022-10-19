#include "main.h"

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum value
 * @max: value to exceed
 *
 * Return: NULL
 */
int *array_range(int min, int max)
{
	int *pointer;
	int size, i, b;

	if (min > max)
		return (0);

	if (max > min)
		size = max - min + 1;
	else if (max == min)
		size = 2;

	pointer = malloc(sizeof(int) * size);
	if (pointer == 0)
		return (0);

	for (i = 0, b = min; b <= max; i++, b++)
		pointer[i] = b;
	if (max == min)

		pointer[i] = max;
	return (pointer);
}
