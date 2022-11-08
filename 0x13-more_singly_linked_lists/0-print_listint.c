#include "lists.h"
/**
* print_listint - prints all elements of listint_t
* @h: head
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
