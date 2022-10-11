#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program that multiplies two numbers
* @argc: integer
* @argv: character
* Return: 0
*/
int main(int argc, char *argv[])
{
	int y, x;
	
	if (argc > 2)
	{
		y = atoi(argv[1]);
		x = atoi(argv[2]);

		printf("%d\n", y*x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
