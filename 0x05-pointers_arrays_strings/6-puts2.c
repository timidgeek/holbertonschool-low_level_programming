#include "main.h"
#include <string.h>

/**
 * puts2 - print every other character in a string
 * @str: string to be printed
*/

void puts2(char *str)
{
	int len = strlen(str);
	int index;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);
	_putchar('\n');
}
