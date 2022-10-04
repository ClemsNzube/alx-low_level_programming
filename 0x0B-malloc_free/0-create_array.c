#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: value in the array
 * Return: NULL if size = 0,
 * a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}
	x = malloc(sizeof(*x) * size);
	if (x == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		x[j] = c;
	}
	return (x);
}
