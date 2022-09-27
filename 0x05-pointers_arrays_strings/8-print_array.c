#include "main.h"
#include <stdio.h>

/**
 * print_array - print a number of elements of an array of integers
 * @a: integer
 * @n: integer
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
/* if i does not equal the last character of n */
		if (i != n - 1)
			printf("%d, ", a[i]);
/* if i is the last character */
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}
