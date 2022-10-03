#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to the address of the string
 * @c: character to locate
 * Return: if c is found, a pointer to the first occurrence
 * else NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
