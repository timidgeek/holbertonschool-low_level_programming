#include "lists.h"
/**
* listint_len - returns number of elements
* @h: pointer to head
*
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
