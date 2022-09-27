#include "main.h"

/**
 * _puts - print a string, followed by new line to stdout
 * @str: character
*/

void _puts(char *str)
{
	while (*str)
	_putchar(*str++);
	_putchar('\n')
}
