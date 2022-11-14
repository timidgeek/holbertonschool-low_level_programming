#include "lists.h"
/**
* delete_dnodeint_at_index - deletes node at the index of a
*				dlistint_t linked list.
* @head: pointer to head
* @index: node to be deleted
*
* Return: 1 upon success, -1 upon failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *temp = NULL;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	for (count = 0; count < index; count++)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
	}

	if (ptr->prev)
	{
		temp = ptr->prev;
		temp->next = ptr->next;
	}

	if (ptr->next)
	{
		temp = ptr->next;
		temp->prev = ptr->prev;
	}

	free(ptr);

	if (index == 0)
		*head = temp;

	return (1);
}
