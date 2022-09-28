#include "main.h"

/**
 * factorial - calculate the factorial of a given number
 * @n: paramenter holiding the value
 * Return: -1 if n is less than 0
 * 1 if n equals 0
 * n! if n > 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
