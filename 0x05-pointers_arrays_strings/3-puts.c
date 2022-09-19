#include "main.h"

/**
 * _puts - print a string followed by a new line
 * @str: pointer holding the string variable
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_puts(str[i]);
		i++;
	}
	_puts('\n');
}
