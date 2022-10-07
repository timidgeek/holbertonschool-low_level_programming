#include "main.h"

/**
* factorial - returns factorial of given number
* @n: given number
* Return: factorial of n
*/
int factorial(int n)
{
	if (n >= 1)
		return (n * factorial(n - 1));
	if (n < 0)
		return (-1);
	else
		return (1);
}
