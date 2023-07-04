#include "lists.h"

/**
 * reverse_listint - a function that reverses the list
 * @head: head pointer
 * Return: Addres of the reversed list(node)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = next;
	}

	*head = node;

	return (*head);
}
