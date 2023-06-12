#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer to the new string, null on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3 = NULL;
	int j = 0, i = 0, len1 = 0, len2 = 0, totlen = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	len1 = i;
	i = 0;

	while (s2[i] != '\0')
		i++;
	len2 = i + 1;
	totlen = len1 + len2;

	s3 = malloc(totlen);
	if (s3 == NULL)
		return (NULL);
	i = 0;

	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
