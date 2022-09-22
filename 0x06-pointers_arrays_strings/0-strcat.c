#include "main.h"

/**
 * _strcat - function that concatenates two string
 * @dest: destination of string that will be appended
 * @src: string to be appended
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len1++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';

	return (dest);
}
