#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: head pointer
 * @n: data
 * Return: address of new node or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_new = malloc(sizeof(listint_t));

	if (_new == NULL)
		return (NULL);

	_new->n = n;
	_new->next = *head;
	*head = _new;

	return (_new);
}
