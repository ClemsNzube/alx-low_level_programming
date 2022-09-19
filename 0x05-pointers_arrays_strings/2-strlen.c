#include "main.h"

/**
 * _strlen - calculates length of strings
 * @s: paramenter that represents the variable
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
