#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
int dlent = 0, i;
while (dest[dlent])
{
dlent++;
}
for (i = 0; src[i] != 0; i++)
{
dest[dlent] = src[i];
dlent++;
}
dest[dlent] = '\0';
return (dest);
}
