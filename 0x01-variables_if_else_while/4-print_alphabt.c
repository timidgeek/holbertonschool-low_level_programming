#include <stdio.h>
/**
 * main - Printing the lowercase alphabet excluding e & q
 *
 * Return: Always 0 (success)
*/

int main(void)
{
char soup;

for (soup = 'a'; soup <= 'z'; soup++)
	if (soup != 'e' && soup != 'q')
		putchar(soup);

putchar('\n');

return (0);
}
