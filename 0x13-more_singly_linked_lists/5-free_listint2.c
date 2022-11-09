#include "lists.h"
#include "4-free_listint.c"
/**
* free_listint2 - frees a list and sets head to NULL
* @head: head
*
* Return: void
*/
void free_listint2(listint_t **head)
{
	if (!head)
		return;

	free_listint(*head);

	*head = NULL;
}
