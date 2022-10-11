#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - adds two positive numbers
* @argc: amt of arguments
* @argv: array of strings
* Return: 0
*/
int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; argc > x; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
