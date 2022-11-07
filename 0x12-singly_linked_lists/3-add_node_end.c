#include "lists.h"
/**
* add_node_end - add new node to the end of list_t
* @head: pointer to beginning
* @str: string
*
* Return: address of new element, or NULL upon failure
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int count, i = 0;
	list_t *newnode;
	list_t *temp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	newnode->len = i;
	newnode->str = strdup(str);
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
