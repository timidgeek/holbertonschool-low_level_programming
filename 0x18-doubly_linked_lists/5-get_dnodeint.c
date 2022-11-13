#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t list
* @head: pointer to head
* @index: index of node
*
* Return: nth node upon success, NULL upon failure
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nthnode = head;
	unsigned int count;

	for (count = 1; count <= index; count++)
	{
		if (nthnode->next == NULL)
			return (NULL);
		nthnode = nthnode->next;
	}

	return (nthnode);
}
