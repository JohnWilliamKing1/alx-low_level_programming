#include <stdio.h>
#include <string.h>
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The source string.
 * @accept: The accept string.
 *
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			count++;
		}
		else
		{
			break;
		}
		s++;
	}
	return (count);
}
