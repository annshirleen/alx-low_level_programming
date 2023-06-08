#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string is
 * a palindrome and 0 if not
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len = length(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}

/**
 * length - returns the length of a string
 * @s: string
 * Return: integer
 */

int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}

/**
 * is_palindrome_recursive - palindrome function helper
 * @s: string pointer
 * @mwanzo: start of the string
 * @mwisho: end of the string
 * Return: integer
 */

int is_palindrome_recursive(char *s, int mwanzo, int mwisho)
{
	if (mwanzo >= mwisho)
		return (1);
	if (s[mwanzo] != s[mwisho])
		return (0);
	return (is_palindrome_recursive(s, mwanzo + 1, mwisho - 1));
}
