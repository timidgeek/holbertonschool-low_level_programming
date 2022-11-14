#include "lists.h"
/**
* sum_dlistint - returns the sum of all data of a dlistint_t list
* @head: pointer to head
*
* Return: sum of all data upon success, 0 upon failure
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
