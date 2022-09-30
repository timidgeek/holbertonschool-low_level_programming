#include "holberton.h"

/**
* string_toupper - changes all lowercase letters to uppercase letters
* @*: character
* Return: string in lowercase
*/
char *string_toupper(char *str)
{
	int i = 0;

/* iterate loop until end of the string */
	while (str[i] != '\0')
	{
/* if character is in lowercase, change to uppercase by subtracting 32, in reference to the ASCII table */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
return (str);
}
