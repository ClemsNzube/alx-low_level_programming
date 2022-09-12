#include <stdio.h>
/**
 * main - Entry point
 * Description: prints alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}	
