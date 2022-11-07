#include "lists.h"
/**
* print_list - prints all the elements of a list_t list
* @h: pointer
*
* Return: Number of nodes upon sucess, null upon failure.
*/
size_t print_list(const list_t *h)
{
	int count = 0; /* count variable */

	if (h == NULL)
		return (0);

	while (h != NULL) /* traverse linked list and maintain count */
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str); /* print total count */
		}
		h = h->next;
		count++;

	}

	return (count);
}
