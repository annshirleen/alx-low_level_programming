#include "lists.h"

/**
 * add_node_end - node at the end
 * @head: head pointer
 * @str: string
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = strlen(str);
	list_t *_new = malloc(sizeof(list_t));

	if (_new == NULL)
		return (NULL);

	_new->str = strdup(str);
	if (_new->str == NULL)
	{
		free(_new);
		return (NULL);
	}

	_new->len = len;
	_new->next = NULL;

	if (*head == NULL)
		*head = _new;
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = _new;
	}

	return (_new);
}
