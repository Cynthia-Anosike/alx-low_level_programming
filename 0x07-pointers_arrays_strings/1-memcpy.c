#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 * @n: number of bytes to copy
 * @src: memry area to copy from
 * @dest: destination to copy
 *
 * Return: returns the pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
