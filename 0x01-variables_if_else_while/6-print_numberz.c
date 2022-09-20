#include <stdio.h>
/**
 * main - Using putchar to display numbers
 *
 * Return: Always 0 (success)
*/
int main(void)
{
int numb;

for (numb = 0; numb < 10; numb++)
	putchar(numb);
putchar('\n');
return (0);
}
