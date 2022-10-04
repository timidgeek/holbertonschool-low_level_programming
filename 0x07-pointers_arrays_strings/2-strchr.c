#include "main.h"

/**
* _strchr - locates a char in a string
* @s: string
* @c: character
*
* Return: c or NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (0);
}
