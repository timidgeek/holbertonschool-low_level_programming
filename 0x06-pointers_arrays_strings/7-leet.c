#include "holberton.h"

/**
* leet - encodes a string to 1337
* @s: input
* Return: s
*/
char *leet(char *s)
{
	int i;
	int v;
	int find[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (v = 0; v <= 9; v++)
		{
			if (s[i] == find[v])
			{
				s[i] = replace[v / 2];
				v = 9;
			}
		}
	}
	return (s);
}
