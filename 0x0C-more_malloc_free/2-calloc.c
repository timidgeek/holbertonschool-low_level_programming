#include "main.h"

/**
 * _calloc - Function that allocates memory
 * for an array using malloc
 *
 * @nmemb: usage of memory
 * @size: size of nmemb
 *
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(s + i) = 0;
	return (s);
}
