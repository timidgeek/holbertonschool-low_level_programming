#include "lists.h"
/**
* free_list - frees list_t
* @head: pointer to beginning of list
*
* Return: 0
*/
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);

	free(head->str);
	free(head);
}
