#include <stdio.h>

/**
 * main - Prints programs name followed by a new line
 * @argc: number of items in the array of input
 * @argv: array of items
 * Return: Always 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
