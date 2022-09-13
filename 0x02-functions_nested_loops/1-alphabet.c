#include "main.h"
/**
 * main - print the alphabet
 * follwed by a new line
 * Return: Always 0 (Sucess)
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z');
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
