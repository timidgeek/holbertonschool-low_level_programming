#include "lists.h"
/**
* add_nodeint - adds new node to beginning of list
* @head: head
* @n: value
*
* Return: new node upon success, null upon failure
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
