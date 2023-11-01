#include "main.h"
#include <stdlib.h>
/**
 * count_words - ..
 * @str: ..
 * Return: ..
 */
int count_words(char *str)
{
	int i, words = 0;

	for (i = 0; str[i]; i++)
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i + 1]
				!= ' ' && str[i + 1] != '\t' && str[i + 1] != '\n')
			words++;
	return (words);
}
/**
 * strtow - ..
 * @str: ..
 * Return: ..
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, l, m, words_count;

	if (str == NULL || *str == '\0')
		return (NULL);
	words_count = count_words(str);
	words = malloc((words_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, l = 0; i < words_count; i++, l++)
	{
		while ((str[l] == ' ' || str[l] == '\t' || str[l] == '\n') && str[l] != '\0')
			l++;
		for (j = l; str[j] != ' ' && str[j] != '\t' && str[j] != '\n' && str[j]
				!= '\0'; j++)
			;
		words[i] = malloc((j - l + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (; i >= 0; i--)
				free(words[i]);
			free(words);
			return (NULL);
		}
		for (k = l, m = 0; k < j; k++, m++)
			words[i][m] = str[k];
		words[i][m] = '\0';
	}
	words[i] = NULL;
	return (words);
}

