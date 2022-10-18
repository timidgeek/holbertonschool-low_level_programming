#include "main.h"
/**
* malloc_checked - allocates memory using malloc
* @b: ammount memory
* Return: *ptr in success, 98 in failure
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b)); /* allocating memory for int  */
	if (ptr == NULL) /* memory allocation failure */
		exit(98);
	else
		return (ptr);
	/* do we need to free the memory? */
}
