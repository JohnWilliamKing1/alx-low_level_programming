#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - ..
 * @b: ...
 * Return: ..
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
