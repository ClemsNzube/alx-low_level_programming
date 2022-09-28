#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: pointer holding string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return;
	}
	count++;
	return (count + _strlen_recursion(s + 1));
}
