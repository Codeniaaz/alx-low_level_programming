#include "lists.h"

/**
 *free_listint -  function that frees a listint_t list.
 *@head: a pointer to the next node
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;

		free(tmp);
	}
}
