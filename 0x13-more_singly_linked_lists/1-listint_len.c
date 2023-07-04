#include "lists.h"

/**
 * listint_len - function that returns all elements in a list
 * @h: head pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
