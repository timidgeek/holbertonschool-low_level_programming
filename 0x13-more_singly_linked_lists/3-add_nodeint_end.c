#include "lists.h"
/**
* add_nodeint_end - adds new node to end of list
* @head: head
* @n: value
*
* Return: new node upon success, NULL upon failure
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}
