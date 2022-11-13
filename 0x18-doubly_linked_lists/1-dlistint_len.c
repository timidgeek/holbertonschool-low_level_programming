#include "lists.h"
/**
* dlistint_len - returns number of elements in a dlistint_t list
* @h: pointer to head
*
* Return: num of elements upon success
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
