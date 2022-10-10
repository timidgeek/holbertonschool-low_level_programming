#include "main.h"
int squareroot(int n, int i);
/**
* squareroot - checks if perfect square
* @x: input
* @i: counter
* Return: if square root
*/
int squareroot(int x, int i)
{
	if (i == x / 2)
		return (-1);
	if ((i * i) == x)
		return (i);
	return (squareroot(x, i + 1));
}
/**
* _sqrt_recursion - print square root of n
* @n: integer
* Return: square root, or -1 if square root doesn't exist
*/
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (squareroot(n,  x));
}
