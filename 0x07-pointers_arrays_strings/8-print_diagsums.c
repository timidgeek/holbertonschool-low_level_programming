#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of two diagonals
* @a: array
* @size: integer
*/
void print_diagsums(int *a, int size)
{
	int i;
	int x;
	int one = 0;
	int two = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		one = one + a[i];

	for (x = size - 1; x <= (size * size) - size; x = x + size - 1)
		two = two + a[x];
	printf("%d, %d\n", one, two);
}
