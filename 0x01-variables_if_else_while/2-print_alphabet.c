#include <stdio.h>

/**
 * main - Entry Point
 * Description: A program that prints alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	int c = 'a';
	
	while (c <= 'z')
	{
		putchar (c);
		c++;	
	}
	putchar ('\n');	
	return (0);
}
