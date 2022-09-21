#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: letter check
 *
 * Return: 0.
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
