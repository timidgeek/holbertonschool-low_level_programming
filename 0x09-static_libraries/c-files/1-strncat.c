#include "main.h"

/**
* _strncat - concatenates two strings, using at most n bytes
* @dest: character
* @src: character
* @n: integer
* Return: destination
*/
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i;

/* finding length of dest */
	while (dest[dlen] != '\0')
		++dlen;
/* concatenating using at most n bytes from src */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dlen + i] = src[i];

	return (dest);
}
