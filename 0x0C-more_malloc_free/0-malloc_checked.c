#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - mallocs, but checks the malloc after mallocing
 * @b: size of the malloc
 *
 * Return: void pointer
 */
 
 void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
             free(mem);
	     exit(98);
	}
	return (mem);
}
