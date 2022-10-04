#include "holberton.h"

/**
* cap_string - capitalizes first letter of each word
* @str: pointer
* Return: 0
*/
char *cap_string(char *str)
{
	int i;

/* capitalize first char of words */
	for (i = 0; str[i] != '\0'; i++)
	{
/* check if first char lowercase */
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32; /*subtract to make capital */
		continue; /* continue to loop */
		}
		if (str[i] == ' ') /* check space */
		{
/* if space found, check next character */
			++i;
/* check next char is lowercase */
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
		else
		{
/* all other uppercase letters should be lowercase */
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
	}
	return (str);
}
