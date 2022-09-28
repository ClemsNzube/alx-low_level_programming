#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer holding the string
 * Return: s
 */

void _puts_recursion(char *s)
{
	char i;

	if (s[i] == '\0')
	{
		return ('\0');
	}
	return (s[i] + _puts_recursion(s));
}
