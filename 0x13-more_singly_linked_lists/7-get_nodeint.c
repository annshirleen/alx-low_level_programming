#include "lists.h"

/**
 * get_nodeint_at_index - function tat returns the nth node of a list
 * @head: head pointer
 * @index: index of node
 * Return: address of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	while (n < index && head != NULL)
	{
		head = head->next;
		n++;
	}
	return (head);
}
