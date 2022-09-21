#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @r: variable
 *
 * Return: 0.
*/
int print_last_digit(int r)
{
	int i = r % 10;

	if (i < 0)
		i *= -1;
	_putchar(i + '0');
	return (i);
}
