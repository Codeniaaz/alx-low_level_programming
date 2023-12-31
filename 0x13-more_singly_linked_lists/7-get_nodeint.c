#include "lists.h"

/**
 *get_nodeint_at_index -  function that returns the nth node of a linked list.
 *@head: a pointer
 *@index: the nth index
 *Return: always  success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
