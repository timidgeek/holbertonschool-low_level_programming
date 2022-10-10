#include "main.h"

/**
* _memset - fills bytes of memory with a constant byte
* @s: character
* @b: character
* @n: integer
*
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
return (s);
}
