#include <stdio.h>
/**
 * main - Printing all single digit numbers of base ten
 *
 * Return: Always 0 (success)
*/
int main(void)
{
char num = 0;

while (num < 10)
{	putchar(num);
	num++;
putchar('\n');
}
return (0);
}
