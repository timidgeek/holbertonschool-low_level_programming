#include "lists.h"
/**
* pop_listint - deletes a head node of linked list
* @head: head
*
* Return: head node's data (n)
*/
int pop_listint(listint_t **head)
{
	int n;

	listint_t *new;

	if (*head == NULL)
		return (0);

	n = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (n);
}
