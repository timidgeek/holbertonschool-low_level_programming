#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a: integer
 * @b: integer
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
