#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: number of factorial to be printed
 * Return: Return -1 if error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n-1));
}
