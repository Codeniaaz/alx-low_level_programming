 #include "lists.h"

/**
 *listint_len - function that returns the number of elements
 *@h: pointer to a linked list
 *Return: always success
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		num_of_nodes++;
		h = h->next;
	}
	return (num_of_nodes);
}
