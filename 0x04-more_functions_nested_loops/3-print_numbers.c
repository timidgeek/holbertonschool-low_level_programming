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
		putchar(i);
		i++;
	}

	putchar('\n');
}
