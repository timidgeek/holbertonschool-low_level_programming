#include "holberton.h"

/**
* cap_string - capitalizes first letter of each word
* @str: pointer
* Return: 0
*/
char *cap_string(char *str)
{
	int i;
	int v;
	int cap = 32;
	int separators[] = {',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}', '\n', '\t', ' '};

	/* capitalize first char of words */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* check if first char lowercase */
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - cap;
		}
		cap = 0;
		for (v = 0; v <= 12; v++)
		{
			if (str[i] == separators[v]) /* check separation */
			{
				v = 12;
				cap = 32;
			}
		}
	}
	return (str);
}
