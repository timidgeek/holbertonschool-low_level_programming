#include "holberton.h"

/**
* _strcmp - compares two strings
* @s1: character
* @s2: character
* Return: 0 if flag == 0
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else
		{
			return (0);
		}
		i++;
	}
return (0);
}
