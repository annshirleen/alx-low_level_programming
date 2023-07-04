#include "lists.h"

/**
 * free_listint - a function tat fees a list
 * @head: head pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
