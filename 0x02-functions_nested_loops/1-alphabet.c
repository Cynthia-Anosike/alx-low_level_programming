#include "main.h"
/**
 * print the alphabet x 10
 * follwed by a new line
 * Return: Always 0 (Sucess)
 */
void print_alphabet(void)
{
	int i = 1;
	char c = 'a';
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
	}
	_putchar('\n');
}
