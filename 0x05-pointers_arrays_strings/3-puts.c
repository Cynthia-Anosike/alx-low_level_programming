#include "main.h"
#include <unistd.h>

/**
 * puts - prints a string, to stdout
 * @str: value to be evaluated
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
