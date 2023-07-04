#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of list
 * @head: head pointer
 * @n: new data
 * Return: address of the new node or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
		return (NULL);
	
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		listint_t *temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end_node;
	}
	return (end_node);
}
