#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: head pointer
 * Return: null
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
	free(head);
}
