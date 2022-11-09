#include "lists.h"
/**
* free_listint2 - frees a list and sets head to NULL
* @head: head
*
* Return: void
*/
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}

	*head = NULL;
}
