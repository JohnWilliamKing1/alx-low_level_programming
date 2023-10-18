#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: the first pointer
 * @s2: the second poiner
 * Return: the result
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
