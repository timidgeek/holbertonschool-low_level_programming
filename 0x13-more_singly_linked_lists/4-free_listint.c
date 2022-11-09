#include "lists.h"
/**
* free_listint - frees a linked list
* @head: head
*
* Return: free
*/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}
