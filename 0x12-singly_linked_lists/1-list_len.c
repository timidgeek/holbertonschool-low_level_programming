#include "lists.h"
/**
* list_len - returns number of elements in a list_t
*
* @h: pointer to head
*
* Return: number of elements
*/
size_t list_len(const list_t *h)
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
