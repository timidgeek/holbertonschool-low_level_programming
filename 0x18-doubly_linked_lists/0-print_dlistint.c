#include "lists.h"
/**
* print_dlistint - prints all elements of a dlistint_t
* @h: pointer to head
*
* Return: number of nodes upon success
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
