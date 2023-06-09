#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 *  memory,
 * which contains a copy of the string given as a parameter.
 * @str: sting
 * Return: pointer to new location
 */
char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *new_str = NULL;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	len = i + 1;

	new_str = malloc(len);
	if (new_str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
