#include "main.h"

/**
* _strstr - locates a substring
* @haystack: character
* @needle: character
*
* Return: beginning substring or null
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *x = needle;

		while (*haystack && *x && *haystack == *x)
		{
			haystack++;
			x++;
		}
		if (!*x)
			return (i);
		haystack  = i + 1;
	}
return ('\0');
}
