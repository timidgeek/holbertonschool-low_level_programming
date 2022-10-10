#include "main.h"

int prime_checker(int n, int i);
/**
* is_prime_number - finds prime number
* @n: variable to check
* Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prime_checker(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
* prime_checker - checks for prime
* @n: variable to check
* @i: checker
* Return: prime
*/

int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime_checker(n, i - 1));
}
