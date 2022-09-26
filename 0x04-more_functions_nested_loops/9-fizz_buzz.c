#include "main.h"
#include <stdlib.h>

/**
 * main - fizzbuzz
 *
 * Return: 0
*/

int main(void)
{
	int  num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	putchar('\n');
	return (0);
}
