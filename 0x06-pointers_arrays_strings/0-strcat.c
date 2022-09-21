#include "main.h"

/**
 * _strcat - function that concatenates two string
 * @dest: destination of string that will be appended
 * @src: string to be appended
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = 0;
	len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		len2++;
	}

	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
