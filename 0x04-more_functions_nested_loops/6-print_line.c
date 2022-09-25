#include "main.h"

/**
 * print_line - draws a straight line
 * @n: integer
*/

void print_line(int n)
{
	int k;

	if (n > 0)
	{
		for (k = 0; k < n; k++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}

