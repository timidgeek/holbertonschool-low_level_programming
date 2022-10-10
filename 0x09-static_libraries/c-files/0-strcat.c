#include "main.h"

/**
* _strcat - concatenates two strings
* @src: character to cat
* @dest: character to cat
* Return: destination
*/
char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int slen;

/* finding length of string dest */
	while (dest[dlen] != '\0')
	{
		++dlen;
	}
/* finding length of string src and concatenating the two strings */
	for (slen = 0; src[slen] != '\0'; ++slen, ++dlen)
	{
		dest[dlen] = src[slen];
	}
return (dest);
}
