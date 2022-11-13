#include "lists.h"
/**
* add_dnodeint - adds new node to beginning of a dlistint_t list
* @head: pointer to head
* @n: struct data
*
* Return: address of new element upon success, NULL upon failure
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode  = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	if ((*head) != NULL)
		(*head)->prev = newnode;

	newnode->n = n;
	newnode->next = (*head);
	newnode->prev = NULL;
	(*head) = newnode;

	return (newnode);
}
