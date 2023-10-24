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
	for (; *haystack != '\0'; haystack++)
	{
		char *haystack;
		char *needle;

		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			neddle++;
		}
		if (*needle == '\0')
			return (haystack);
	}
	return (NULL);
}
