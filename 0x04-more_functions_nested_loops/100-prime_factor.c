#include <stdio.h>

/**
 * main - finds and prints the largest prime factorof the number 612
 * followed by anew line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x = 612852475143;
	long int py;

	for (py = 2; py < x; py++)
	{
		if (x % py == 0)
		{
			x = x / py;
		}
	}
	printf("%d\n", py);
	return(0);
}
