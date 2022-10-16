#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns sum of all its parameters
 * @n: number of parameters
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	if (n != 0)
		for (i = 0; i < n; sum += va_arg(al, unsigned int), i++)
	;
	va_end(ap);
	va_end(ap);
	return (sum);
}
