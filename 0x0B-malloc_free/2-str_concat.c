#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: cat s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int index, x = 0, i = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		i++;

	array = malloc(sizeof(char) * i);

	if (array == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		array[x++] = s1[index];

	for (index = 0; s2[index]; index++)
		array[x++] = s2[index];

	return (array);
}
