#include "main.h"
#include <unistd.h>

/**
 * puts - prints a string, to stdout
 * @str: value to be evaluated
 */
void _puts(char *str)
{
	int 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
