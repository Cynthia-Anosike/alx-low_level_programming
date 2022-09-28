#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - prints the value of x raised to power y
 * @x: value
 * @y: power raised
 * Return: return -1 if error, return 1 if success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
