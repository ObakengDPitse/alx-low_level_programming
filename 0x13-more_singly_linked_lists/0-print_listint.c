#include "lists.h"

/**
 * print_listint - prints elements of the linked list
 * @h: linked list of type listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}

	return (num);
}

