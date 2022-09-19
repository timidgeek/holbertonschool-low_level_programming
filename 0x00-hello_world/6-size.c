#include <stdio.h>

/**
 * main - Displaying integer types and storage size.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	printf("signed char: ");
	printSignedRange(sizeof(char));

	printf("unsigned char: ");
	printSignedRange(sizeof(unsigned char));

	printf("signed int: ");
	printSignedRange(sizeof(int));

	printf("unsigned int: ");
	printSignedRange(sizeof(unsigned char));

	printf("signed short int: ");
	printSignedRange(sizeof(short int));

	printf("unsigned short int: ");
	printSignedRange(sizeof(unsigned short int));

	return (0);
}
