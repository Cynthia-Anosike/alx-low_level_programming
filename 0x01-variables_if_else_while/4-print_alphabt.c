#include <stdio.h>
/**
 * main - This code prints all letters except e and q
 * followed by a white line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
		putchar('\n');
		return (0);
}
