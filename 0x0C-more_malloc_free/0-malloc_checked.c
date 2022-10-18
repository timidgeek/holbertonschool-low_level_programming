#include "main.h"
/**
* malloc_checked - allocates memory using malloc
* @b: ammount memory
* Return: *ptr in success, 98 in failure
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b); /* allocating memory for int  */
	if (ptr == NULL) /* memory allocation failure */
		exit(98);
	return (ptr);
	/* do we need to free the memory? */
}
