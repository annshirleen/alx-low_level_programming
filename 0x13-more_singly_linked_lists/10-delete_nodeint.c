#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: head pointer
 * @index: specified index of nodes
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *prev_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	prev_node = NULL;
	while (i < index && temp != NULL)
	{
		prev_node = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	prev_node->next = temp->next;
	free(temp);
	return (1);
}
