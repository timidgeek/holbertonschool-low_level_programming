#include <stdio.h>
/**
 * main - printing zero thru nine and a thu f
 *
 * Return: Always 0 (success)
*/
int main(void)
{
int ween;
char teen;

for (ween = 0; ween < 10; ween++)
	putchar(ween);
for (teen = 'a'; teen <= 'f'; teen++)
	putchar(teen);
putchar('\n');
return (0);
}
