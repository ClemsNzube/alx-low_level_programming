#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: string to be copied
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to
 * the duplicated string
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *x;
	int i = 0, j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	x = malloc(sizeof(*x) + 1 * i);
	if (x == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		x[j] = str[j];
	}
	x[j] = '\0';
	return (x);
}

