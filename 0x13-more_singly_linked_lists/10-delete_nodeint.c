#include "lists.h"
/**
* delete_nodeint_at_index - deletes node at index of list
* @head: head
* @index: index
*
* Return: 1 upon success, -1 upon failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp1, *temp2;

	temp1 = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && temp1 != NULL; i++)
		{
			temp1 = temp1->next;
		}
	}
	if (temp1 == NULL)
	{
		return (-1);
	}

	temp2 = temp1->next;

	if (index != 0)
	{
		temp1->next = temp2->next;
		free(temp2);
	}
	else
	{
		free(temp1);
		*head = temp2;
	}

	return (1);
}
