#include "main.h"

/**
 * more_numbers - print a series of numbers ten times
 *
 * Return: a number
*/

void more_numbers(void)
{
	int counter, num;

	for (counter = 0; counter < 10; counter++)
    	{
        	for (num = 0; num <= 14; num++)
        	{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
