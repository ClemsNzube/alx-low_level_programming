#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: Destination of string to be appended
 * @src: string to be appended
 * @n: number of characters that would be appended
 *
 * Return: pointer of concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; i < n && src[i]; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len + n + 1] = '\0';

	return (dest);
}
