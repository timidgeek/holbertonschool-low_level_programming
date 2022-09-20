#include <stdio.h>
/**
 * main - printing zero thru nine and a thu f
 *
 * Return: Always 0 (success)
*/
int main(void)
{
char teen;

for (teen = 0; teen < 10; teen++)
	putchar(teen);
for (teen = 'a'; teen <= 'f'; teen++)
	putchar(teen);
putchar('\n');
return (0);
}
