#include "main.h"

/**
 * more_numbers - print a series of numbers ten times
 *
 * Return: 0
*/

void more_numbers(void)
{
	int counter, num;

	for (counter = 0; counter <= 9; counter++)
    	{
        	for (num = 0; num <= 14; num++)
        	{
			if (counter > 9)
			{
				putchar('0' + (num / 10));
				putchar('0' + (num % 10));
			}
		}
	}
	putchar('\n');
}
