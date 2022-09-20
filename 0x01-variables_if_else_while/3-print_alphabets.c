#include <stdio.h>
/**
 * main - Printing the lowercase alphabet using putchar
 *
 * Return: Always 0 (success)
*/

int main(void)
{
char soup;

for (soup = 'a'; soup <= 'z'; soup++)
	putchar(soup);

for (soup = 'A'; soup <= 'Z'; soup++)
	putchar(soup);

putchar('\n');

return (0);
}
