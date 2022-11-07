#include "lists.h"
/**
* add_node - adds new node at beginning of list_t
* @str: string
* @head: pointer to beginning of list
*
* Return: new node, or null in event of failure
*/
list_t *add_node(list_t **head, const char *str)
{
	int count, i = 0;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	newnode->len = i;
	newnode->str = strdup(str);
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
