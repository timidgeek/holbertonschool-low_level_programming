#include "lists.h"
/**
* print_dlistint_backward - prints a dlistint_t, backwards
* @h: pointer to head
*
* Return: num of nodes upon success
*/
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	while (ptr->next != NULL)
		ptr = ptr->next;

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->prev;
	}

	return (count);
}
