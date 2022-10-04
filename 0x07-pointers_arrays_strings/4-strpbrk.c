#include "main.h"
#include "_strchr.c"

/**
* _strpbrk - searches a str for bytes
* @s: string
* @accept: string
*
* Return: to matching byte or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	if ((*s == '\0') || (*accept == '\0'))
		return ('\0');
	while (*s)
	{
		if (_strchr(*accept, *s))
		{
			return ((char *) s);
		}
		else
		{
			s++;
		}
	}
	return ('\0');
}
