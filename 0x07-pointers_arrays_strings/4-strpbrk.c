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
	int i;
	int v;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (v = 0; accept[v] != '\0'; v++)
		{
			if (s[i] == accept[v])
				return (s + i);
		}
	}
	return ('\0');
}
