#include <stdio.h>
/**
 * main - Alphabet in reverse
 *
 * Return: Always 0 (success)
*/
int main(void)
{
char soup;

for (soup = 'z'; soup >= 'a'; soup--)
	putchar(soup);

putchar('\n');

return (0);
}
