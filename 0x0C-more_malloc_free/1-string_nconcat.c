#include "main.h"
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
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *s, *check;

	if (s1 == NULL)
		s1 = 0;
	if (s2 == NULL)
		s2 = 0;
	if (n >= len2)
		n = len2;
	s = malloc(len1 + n + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++) /* finding length of s1  */
		s[i] = s1[i]; /* copy */
	for (x = 0; x < len2; x++)
		s[x + i] = s2[x]; /* shift and copy  */
	s[x + i] = '\0';
	check = malloc(5);
	free(check);

	return (s);
}
