#include "main.h"
int _strlen(char *s);

/**
* string_nconcat - concatenates two strings
* @s1: string one
* @s2: string two
* @n: integer
* Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x;
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	char *s;
	char  *check = malloc(5);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= len2) /* first n bytes of len2  */
		n = len2;
	if (n <= len2)
		len2 = n;
	s = malloc(sizeof(char) * (len1  + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++) /* finding length of s1  */
		s[i] = s1[i]; /* copy */
	for (x = 0; x < len2; x++)
		s[x + i] = s2[x]; /* shift and copy  */
	s[x + i] = '\0';
	free(check);

	return (s);
}
/**
 * _strlen - return length of string
 * @s: character
 * Return: length of string
*/

int _strlen(char *s)
{
	int y;

	for (y = 0; s[y] != '\0'; ++y)
	{
	}
	return (y);
}
