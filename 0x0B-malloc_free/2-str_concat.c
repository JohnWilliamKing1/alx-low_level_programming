#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates
 * @s1: the 1 string
 * @s2: the 2 string
 * Return: the 2 string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		concat_str[i] = s2[j];
	concat_str[i] = '\0';
	return (concat_str);
}
