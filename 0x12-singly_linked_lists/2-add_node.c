#include "lists.h"

/**
 * add_node - a function that adds a node at the beginning of a list
 * @head: headpointer
 * @str: string
 * Return: address of the new node or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *_new;
	int len = 0;

	_new = malloc(sizeof(list_t));
	if (_new == NULL)
		return (NULL);

	_new->str = strdup(str);
	if (_new->str == NULL)
	{
		free(_new);
		return (NULL);
	}

	_new->len = len;
	_new->next = *head;
	*head = _new;

	return (_new);
}
