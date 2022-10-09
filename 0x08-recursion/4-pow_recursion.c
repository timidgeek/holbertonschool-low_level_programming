#include "main.h"

/**
* _pow_recursion - raises x to power of y
* @x: integer to be raised
* @y: integer of power
* Return: the value of x to power y, or -1 if y is negative
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
