#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase ten times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char betty;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (betty = 'a'; betty <= 'z'; betty++)
		{
			_putchar(betty);
		}
	_putchar('\n');
	}

}
