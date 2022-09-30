#include "holberton.h"

/**
* string_toupper - changes all lowercase letters to uppercase letters
* @str: character
* Return: string in lowercase
*/
char *string_toupper(char *str)
{
	int i = 0;

/* iterate loop until end of the string */
	while (str[i] != '\0')
	{
/* if char is lower, change to upper by subtract 32, per ASCII table */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
return (str);
}
