#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list
* @head: pointer to head
* @n: struct data
*
* Return: address of new element upon success, null upon failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp = *head;

	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (NULL);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newnode;
	newnode->prev = temp;

	return (newnode);
}
