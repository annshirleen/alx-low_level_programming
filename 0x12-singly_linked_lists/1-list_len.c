#include "lists.h"

/**
 * list_len - length of the list
 * @h: head pointer
 * Return: number of elments in a linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
