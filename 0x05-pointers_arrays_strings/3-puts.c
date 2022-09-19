#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string, to stdout
 * @str: value to be evaluated
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
