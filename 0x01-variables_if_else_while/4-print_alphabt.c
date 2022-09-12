#include <stdio.h>
/**
 * main - Entry point
 * Description: print all lower case alphabet except q and e
 * Return: 0
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' && c == 'q')
		{
			
			continue;
		}
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
