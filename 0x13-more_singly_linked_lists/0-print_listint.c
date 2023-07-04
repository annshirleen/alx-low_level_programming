#include "lists.h"

/**
 * print_listint - function that prints all elements of a list
 * @h: head pointer
 * Return: number of elements in node
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
