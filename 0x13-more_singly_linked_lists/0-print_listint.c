#include "list.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a linked list
 * @h: head of a linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}
	return (count);
}
