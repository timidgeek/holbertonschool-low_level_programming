#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Playing with numbers
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = (n % 10);
	printf("Last digit of $n is");
	if ($lastDigit > 5)
		printf("is %d\n\n, and is greater than 5\n", lastDigit);
	else if ($lastDigit == 0)
		printf("is $d\n\n, and is 0\n", lastDigit);
	else if ($lastDigit < 6)($lastDigit != 0)
		printf("is %d\n\n, and is less than 6 and not 0\n", lastDigit);
	return (0);
}
