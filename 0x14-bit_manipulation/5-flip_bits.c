#include "main.h"
/**
* flip_bits - returns number of bits needed to flip,
* in to get from one num to another
* @n: unsigned long int
* @m: unsigned long int
*
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, bits = 0;

	while (x > 0)
	{
		bits += (x & 1);
		x >>= 1;
	}
	return (bits);
}
