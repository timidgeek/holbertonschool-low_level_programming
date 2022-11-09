#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a list
* @head: head
* @index: index
*
* Return: nth node, or NULL if node doesnt exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			count++;
			head = head->next;
		}
	}

	return (head);
}
