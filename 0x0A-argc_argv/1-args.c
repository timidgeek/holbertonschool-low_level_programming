#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - prints program's name
* @argc: integer
* @argv: array of strings
* Return: 0
*/
int main(int argc, char *argv[])
{
	int x = atoi(*argv);

	if (x >= 0)
		printf("%d\n", argc - 1);
	return (0);
}
