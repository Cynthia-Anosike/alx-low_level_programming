#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of srguments passed to the program
 * @argc: numberof arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
