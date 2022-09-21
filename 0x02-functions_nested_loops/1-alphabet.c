#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: Always 0.
*/
void print_alphabet(void)
{
	char betty;

	for (betty = 'a'; betty <= 'z'; betty++)
	{
		_putchar(betty);
	}
	_putchar('\n');
}
