#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: variable
*/

void print_diagonal(int n)
{
	int k;
	int j;

	if (n > 0)
	{
		for (k = 0; k < n; k++)
		{
			for (j = 0; j < k; j++)
				_putchar(' ');
			_putchar('\\');

			if (k == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
