#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strdup - duplicate to new location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
	int i, end = 0;
	char *array;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		end++;

	array = malloc(sizeof(char) * (end + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		array[i] = str[i];

	array[end] = '\0';

	return (array);
}
