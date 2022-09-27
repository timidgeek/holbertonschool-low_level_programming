#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: character
*/

void print_rev(char *s)
{
	int index;

/* moving forwards in the index/array */
	for (index = 0; s[index] != '\0'; index++)
		;
/* moving backwards in the index/array */
	for (index--; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
