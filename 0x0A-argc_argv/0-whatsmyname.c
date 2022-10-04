#include <stdio.h>
#include "main.h"

/**
 * main - function to print the name of the program
 * @argc: unused variable c
 * @argv: variable to be printed
 * Return: Always (0)
 */
int main(int argc _attributes_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
