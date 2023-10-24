#include "lists.h"

/**
 *free_listint2 - function that frees a listint_t list.
 *@head: a pointer to a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (head == NULL || *head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
