#include "main.h"

/**
 * print_numbers - printing numbers followed by a new line.
 *
 * Return: 0
*/

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
