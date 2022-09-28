#include "main.h"

/**
 * puts_half - prints the last half of the string
 * @str: string to be printed
*/

void puts_half(char *str)
{
	int len;
	int start;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	if (len % 2 != 0)
	{
		start = ((len - 1) / 2) + 1;
	}
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
