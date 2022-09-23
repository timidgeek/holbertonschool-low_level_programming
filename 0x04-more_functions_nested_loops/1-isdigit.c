#include "main.h"

/**
 * _isdigit - Checks for a digit
 *
 * @c: variable to be checked
 *
 * Return: 1 if c is a digit 0 if otherwise
*/

int _isdigit(int c)
{
	if (c < 10 && c >= 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
