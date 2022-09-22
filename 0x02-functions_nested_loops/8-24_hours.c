#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 0.
*/
void jack_bauer(void)
{
	int min = 0;
	int hour = 0;

	while (hour < 24)
	{
		while (min < 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		min = 0;
		hour++;
	}
}
