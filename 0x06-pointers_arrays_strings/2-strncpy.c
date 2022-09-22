#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination of string copied
 * @src: string that has been copied
 * @n: number of string to be copied
 *
 * Return: pointer of copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i + n + 1] = '\0';

	return (dest);
}
