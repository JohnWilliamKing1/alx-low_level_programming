#include "main.h"
#include <stdio.h>
/**
 *_strncpy - copies a string
 * @dest: the desti to be copied at
 * @src: the source
 * @n: the max no. of copied
 * Return: the pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
