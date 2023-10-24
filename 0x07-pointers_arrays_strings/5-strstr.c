#include <stdio.h>
#include "main.h"
/**
 * _strstr - Searches for the first occurrence of a substring in a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the first occurrence of the substring
 * in the string, or NULL if no such occurrence is found.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	char *haystack_pointer = haystack;
	char *needle_pointer = needle;

	while (*haystack_pointer != '\0')
	{
		needle_pointer = needle;
		while (*haystack_pointer == *needle_pointer)
		{
			if (*needle_pointer == '\0')
			{
				return (haystack_pointer);
			}
			haystack_pointer++;
			needle_pointer++;
		}
		haystack_pointer++;
	}
	return (NULL);
}
