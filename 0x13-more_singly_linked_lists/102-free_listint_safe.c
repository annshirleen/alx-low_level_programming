#include "lists.h"

/**
 * free_listint_safe - a function that frees a list
 * @h: head pointer
 * Return: size of list tat was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int diff;
	listint_t *node;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
