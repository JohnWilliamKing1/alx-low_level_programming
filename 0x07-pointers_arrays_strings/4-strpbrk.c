#include <stdio.h>
/**
 * _strpbrk - Searches a string for any character from a set of characters.
 * @s: The string to search.
 * @accept: The set of characters to search for.
 *
 * Return: A pointer to the first occurrence of any character from
 * accept in s, or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int lookup[256] = {0};

	while (*accept)
	{
		lookup[(unsigned char)*accept] = 1;
		accept++;
	}
	while (*s)
	{
		if (lookup[(unsigned char)*s])
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
