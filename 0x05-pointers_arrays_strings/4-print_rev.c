#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: character
*/

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index--; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
