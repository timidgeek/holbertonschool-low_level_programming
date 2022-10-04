#include "main.h"
#include "_strchr.c"

/**
* _strspn - gets the length of a prefix substring
* @s: string
* @accept: string
*
* Return: num bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	if ((*s == '\0') || (*accept == '\0'))
		return (i);
	while (*s && _strchr(accept, *s++))
	{
		i++;
	}
	return (i);
}
