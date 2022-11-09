
#include "lists.h"
/**
* sum_listint - adds all data (n) in a linked list
* @head: head
*
* Return: sum of all data, 0 if failure
*/
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
