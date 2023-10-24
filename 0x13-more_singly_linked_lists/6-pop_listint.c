#include "lists.h"

/**
 *pop_listint - function that deletes the head node of a listint_t linked list
 *@head: a pointer to a pointer
 *Return: The data (n) of the removed head node, or 0 if the list is empty
 *
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
