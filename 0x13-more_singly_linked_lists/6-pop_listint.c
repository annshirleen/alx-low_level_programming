#include "lists.h"

/**
 * pop_listint - a function tat deletes ead of a node
 * @head: head pointer
 * Return: data contained in the node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	node = *head;
	if (node == NULL)
		return (0);
	*head = node->next;
	n = node->n;
	free(node);

	return (n);
}
